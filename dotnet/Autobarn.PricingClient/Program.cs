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
        static void Main(string[] args) {

            var channel = GrpcChannel.ForAddress("https://workshop.ursatile.com:5003/");
            grpcClient = new Pricer.PricerClient(channel);

            var bus = RabbitHutch.CreateBus(AMQP);
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
            Console.WriteLine($"New vehicle costs {reply.Price} {reply.CurrencyCode}");
        }
    }
}
