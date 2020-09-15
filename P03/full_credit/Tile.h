#ifndef TILE_H
#define TILE_H

#include <iostream>
#include "Board.h"


class Tile
{
    std::string _word;
    bool _matched;
    static int _width;
    static std::string _blank;

    public:
        Tile(std::string word);

        bool match(Tile& tile);

        std::string word();

        bool matched();

        int width();

        std::string to_string();

};

int Tile:: _width = -1;

#endif