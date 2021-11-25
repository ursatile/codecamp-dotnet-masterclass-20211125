using System.Threading.Tasks;
using Grpc.Core;
using Microsoft.Extensions.Logging;

namespace Autobarn.PricingServer.Services {
    public class PricerService : Pricer.PricerBase {
        private readonly ILogger<PricerService> logger;
        public PricerService(ILogger<PricerService> logger) {
            this.logger = logger;
        }

        public override Task<PriceReply> GetPrice(PriceRequest request, ServerCallContext context)
        {
            var price = (request.Color == "Blue" ? 5 : 1000);
            
            var reply = new PriceReply() {
                Price = price,
                CurrencyCode = "EUR"
            };
            return Task.FromResult(reply);
        }
    }
}
