using System;
using System.Threading.Tasks;
using Autobarn.Messages;
using EasyNetQ;
using Microsoft.AspNetCore.SignalR.Client;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

namespace Autobarn.Notifier {
    class Program {
        const string AMQP = "amqps://uzvpuvak:SE3ABvHsuIbBMBelslbpZoHDIK1iyzar@rattlesnake.rmq.cloudamqp.com/uzvpuvak";

        private static HubConnection hub;
        static async Task Main(string[] args) {

            JsonConvert.DefaultSettings = JsonSettings;

            hub = new HubConnectionBuilder().WithUrl("https://workshop.ursatile.com:5001/hub").Build();
            await hub.StartAsync();
            var bus = RabbitHutch.CreateBus(AMQP);
            await bus.PubSub.SubscribeAsync<NewVehiclePriceMessage>("Autobarn.Notifier", HandleNewVehiclePriceMessage);
            Console.WriteLine("Listening for NewVehicleMessages");
            Console.ReadLine();
        }
        private static async Task HandleNewVehiclePriceMessage(NewVehiclePriceMessage message) {
            var json = JsonConvert.SerializeObject(message);
            Console.WriteLine($"Sending JSON to hub: {json}");
            await hub.SendAsync("NotifyWebUsers", "Autobarn.Notifier", json);
            Console.WriteLine("Sent!");
        }

        private static JsonSerializerSettings JsonSettings() =>
            new JsonSerializerSettings {
                ContractResolver = new DefaultContractResolver {
                    NamingStrategy = new CamelCaseNamingStrategy()
                }
            };
    }
}
