using System;
using EasyNetQ;
using Autobarn.Messages;

namespace Autobarn.AuditLog
{
    class Program
    {
        const string AMQP = "amqps://uzvpuvak:SE3ABvHsuIbBMBelslbpZoHDIK1iyzar@rattlesnake.rmq.cloudamqp.com/uzvpuvak";
        static void Main(string[] args)
        {
            var bus = RabbitHutch.CreateBus(AMQP);
            bus.PubSub.Subscribe<NewVehicleMessage>("Autobarn.AuditLog", HandleNewVehicleMessage);            
            Console.WriteLine("Listening for NewVehicleMessages");
            Console.ReadLine();
        }
        static void HandleNewVehicleMessage(NewVehicleMessage nvm) {
            var logEntry = $"{nvm.Registration} ({nvm.Manufacturer} {nvm.ModelName}, {nvm.Color}, {nvm.Year}";
            Console.WriteLine(logEntry);
        }
    }
}
