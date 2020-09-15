
#include "Tile.h"
#include "Board.h"



Tile::Tile(std::string word)
    :_word(word),_matched(false)
{
    if(word.size() > _width)
    {
        _width = word.size();


    }
}

bool Tile::match(Tile& tile)
{
    if(_word == tile.word())
    {
        _word = true;

        return true;
    }
    else 
        return false;



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








