
using GameVerse.FrontEnd.Clients;
using GameVerse.FrontEnd.Components;
using GameVerse.FrontEnd.Handlers;
using GameVerse.FrontEnd.Services;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Microsoft.Extensions.DependencyInjection;

namespace GameVerse.FrontEnd
{
    public class Program
    {
        public static async Task Main(string[] args)
        {
            WebAssemblyHostBuilder builder = WebAssemblyHostBuilder.CreateDefault(args);
            builder.RootComponents.Add<App>("#app");
            builder.RootComponents.Add<HeadOutlet>("head::after");

            builder.Services.AddScoped(sp => new HttpClient 
            { 
                BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) 
            });
            
            builder.Services.AddSingleton<LocalStorageService>(); 
            builder.Services.AddScoped<AuthHeaderHandler>(); 

        
            builder.Services.AddHttpClient<GamesClient>()
                .AddHttpMessageHandler<AuthHeaderHandler>(); 
            
            builder.Services.AddSingleton<AuthClient>(); 

            await builder.Build().RunAsync();
        }
    }
}