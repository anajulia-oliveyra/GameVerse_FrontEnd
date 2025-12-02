namespace GameVerse.FrontEnd.Models;

public class Purchase
{
    public int Id { get; set; }
    public int GameId { get; set; }
    public string GameName { get; set; } = "";
    public decimal Price { get; set; }
    public string UserEmail { get; set; } = "";
}


