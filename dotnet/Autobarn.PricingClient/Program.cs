using System;
using System.Threading.Tasks;
using Autobarn.Messages;
using Autobarn.PricingServer;
using EasyNetQ;
using Grpc.Net.Client;

namespace Autobarn.PricingClient {
    class Program {
        const string AMQP = "amqps://uzvpuvak:SE3ABvHsuIbBMBelslbpZoHDIK1iyzar@rattlesnake.rmq.cloudamqp.com/uzvpuvak";

        private static Pricer.PricerClient grpcClient;
        private static IBus bus;
        static void Main(string[] args) {

            var channel = GrpcChannel.ForAddress("https://workshop.ursatile.com:5003/");
            grpcClient = new Pricer.PricerClient(channel);

            bus = RabbitHutch.CreateBus(AMQP);
            bus.PubSub.Subscribe<NewVehicleMessage>("Autobarn.PricingClient", HandleNewVehicleMessage);
            Console.WriteLine("Listening for NewVehicleMessages");
            Console.ReadLine();
        }

        static async Task HandleNewVehicleMessage(NewVehicleMessage nvm) {
            var request = new PriceRequest {
                ModelCode = nvm.ModelCode,
                Color = nvm.Color,
                Year = nvm.Year
            };
            var reply = await grpcClient.GetPriceAsync(request);
            var newVehiclePriceMessage = nvm.ToNewVehiclePriceMessage(reply.Price, reply.CurrencyCode);
            await bus.PubSub.PublishAsync(newVehiclePriceMessage);
        }
    }

    public static class MessageExtensions {
        public static NewVehiclePriceMessage ToNewVehiclePriceMessage(this NewVehicleMessage incomingMessage, int price,
            string currencyCode) {
            return new NewVehiclePriceMessage {
                Manufacturer = incomingMessage.Manufacturer,
                ModelCode = incomingMessage.ModelCode,
                Color = incomingMessage.Color,
                ModelName = incomingMessage.ModelName,
                Registration = incomingMessage.Registration,
                Year = incomingMessage.Year,
                CurrencyCode = currencyCode,
                Price = price
            };
        }
    }
}
