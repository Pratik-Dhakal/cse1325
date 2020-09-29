#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Tile.h"

class Tile;




class Board
{
    std::vector<Tile> itiles;
    public:
        Board(int tiles);

        std::string attempt(int tile1, int tile2);

        bool solved();

        std::string to_string();
        
    
    std::vector<std::string> words 
    {
        "bang", "beam", "bear", "cafe", "came",
        "cold", "come", "cool", "date", "diet",
        "door", "doth", "echo", "exes", "exit",
        "face", "fame", "feed", "fire", "five",
        "four", "free", "frog", "from", "game",
        "goes", "good", "grit", "have", "heal",
        "hear", "here", "hide", "hole", "home",
        "hope", "huge", "keep", "kill", "lace",
        "lame", "leek", "life", "live", "maps",
        "mass", "mate", "maze", "move", "near",
        "need", "nine", "once", "quit", "ques",
        "race", "read", "reed", "reef", "rice",
        "roof", "sins", "stay", "tame", "teen",
        "tens", "tide", "tied", "tree", "twin",
        "zero", "zips",
    };
};


#endif