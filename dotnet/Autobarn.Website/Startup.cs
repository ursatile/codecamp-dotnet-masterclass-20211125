using Autobarn.Data;
using Autobarn.Website.GraphQL.Schemas;
using GraphiQl;
using GraphQL.Server;
using Microsoft.AspNetCore.Builder;
using Microsoft.AspNetCore.Hosting;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using System;
using EasyNetQ;

namespace Autobarn.Website {
	public class Startup {
		protected virtual string DatabaseMode => Configuration["DatabaseMode"];

		public Startup(IConfiguration configuration) {
			Configuration = configuration;
		}

		public IConfiguration Configuration { get; }

		// This method gets called by the runtime. Use this method to add services to the container.
		public void ConfigureServices(IServiceCollection services) {
			services.AddRouting(options => options.LowercaseUrls = true);
			services.AddControllersWithViews().AddNewtonsoftJson();
			services.AddRazorPages().AddRazorRuntimeCompilation();
			Console.WriteLine(DatabaseMode);
			switch (DatabaseMode) {
				case "sql":
					var sqlConnectionString = Configuration.GetConnectionString("AutobarnSqlConnectionString");
					services.UseAutobarnSqlDatabase(sqlConnectionString);
					break;
				default:
					services.AddSingleton<IAutobarnDatabase, AutobarnCsvFileDatabase>();
					break;
			}

            var bus = RabbitHutch.CreateBus("amqps://uzvpuvak:SE3ABvHsuIbBMBelslbpZoHDIK1iyzar@rattlesnake.rmq.cloudamqp.com/uzvpuvak");
            services.AddSingleton<IBus>(bus);

			services.AddScoped<AutobarnSchema>();
			services.AddGraphQL(options => options.EnableMetrics = false)
				.AddNewtonsoftJson();
		
		}

		public void Configure(IApplicationBuilder app, IWebHostEnvironment env) {
			if (env.IsDevelopment()) {
				app.UseDeveloperExceptionPage();
			} else {
				app.UseExceptionHandler("/Home/Error");
				// The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
				app.UseHsts();
			}
			app.UseHttpsRedirection();
			app.UseDefaultFiles();
			app.UseStaticFiles();
			app.UseRouting();
			app.UseAuthorization();

			app.UseGraphQL<AutobarnSchema>();
			app.UseGraphiQl("/graphiql");			
			app.UseEndpoints(endpoints => {
				endpoints.MapControllerRoute(
					name: "default",
					pattern: "{controller=Home}/{action=Index}/{id?}");
			});
		}
	}
}
