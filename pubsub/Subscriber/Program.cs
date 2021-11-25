using System;
using EasyNetQ;

namespace Subscriber
{
    class Program
    {
        const string AMQP = "amqp://user:pass@localhost:5672";

        static void Main(string[] args)
        {            
            Console.WriteLine("Starting Subscriber...");
            var bus = RabbitHutch.CreateBus(AMQP);
            bus.PubSub.Subscribe<Message>(Guid.NewGuid().ToString(), m => {
                Console.WriteLine($"{m.Greeting} (created at {m.CreatedAt:O}");
            });
            Console.WriteLine("Press Enter to quit.");
            Console.ReadLine();
        }
    }

    public class Message
    {
        public string Greeting { get; set; }
        public DateTimeOffset CreatedAt { get; set; }
        public Message(string greeting)
        {
            this.Greeting = greeting;
            this.CreatedAt = DateTimeOffset.Now;
        }
    }
}
