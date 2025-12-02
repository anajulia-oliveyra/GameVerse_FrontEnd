using System;

namespace GameVerse.FrontEnd.Models;

public class GameDetails
{
    public int Id { get; set; }
    public required string Name { get; set; }
    public required string Description { get; set; }
    public decimal Price { get; set; }
}
