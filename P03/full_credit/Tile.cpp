
#include "Tile.h"



Tile::Tile(std::string word)
    :_word(word),_matched(false)
{
    if(word.size() > _width)
    {
        _width = word.size();

        for(int x = 0; x < _width; x++)
            _blank +="-"; 

    }
}

bool Tile::match(Tile& tile)
{
    if(_word == tile.word())
    {
        _matched = true;
        tile._matched = true;
       
    }

    return _matched;
    
}

std::string Tile::word()
{
    return _word;

}

bool Tile::matched()
{
    return _matched;

}

int Tile::width()
{
    return _width;

}

std::string Tile::to_string()
{
    if(_matched == true)
        return _word;
    else
        return _blank;            

}

int Tile:: _width = -1;
std::string Tile:: _blank = "-----";








