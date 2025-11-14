using System;
using GameVerse.FrontEnd.Models;

namespace GameVerse.FrontEnd.Clients;

public class GenresClient
{
    private readonly Genre[] genres =
    [
        new(){
            Id = 1,
            Name = "Fighting",

        },
        new(){
            Id=2,
            Name ="Terror"
        },
        new(){
            Id=3,
            Name = "RolePlaying"
        },
        new(){
            Id=4,
            Name = "OpenWorld"
        },
        new(){
            Id=5,
            Name = "Action"
        },
        new(){
            Id=6,
            Name = "Adventure"
        }
    ];

    public Genre[] GetGenres() => genres;
}
