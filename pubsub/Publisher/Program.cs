using System;
using EasyNetQ;
using Subscriber;

namespace Publisher
{
    class Program
    {
        const string AMQP = "amqp://user:pass@localhost:5672";
        static void Main(string[] args)
        {
            Console.WriteLine("Publisher started!");
            var bus = RabbitHutch.CreateBus(AMQP);
            int count = 0;
            while (true)
            {
                Console.WriteLine("Press any key to publish a message:");
                Console.ReadKey(false);
                var message = new Message($"This is message {count++}");
                bus.PubSub.Publish(message);
            }
        }
    }
}
