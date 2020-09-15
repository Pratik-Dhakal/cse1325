
#include "Board.h"
#include "Tile.h"


Board::Board(int tiles)
{
    std::srand(unsigned(std::time(0) ) );

    std::random_shuffle(words.begin(),words.end(),myrandom);

    for(int x = 0;x < tiles/2; x++)
    {
        itiles[x] = words[x];
        itiles[x+1] = words[x];
    }

    std::random_shuffle(itiles.begin(),itiles.end(),myrandom);


}

std::string Board::attempt(int tile1, int tile2)
{
    std::string s1;
    if(itiles[tile1].match(itiles[tile2]))
        s1 = itiles[tile1].word()+" MATCHES " + itiles[tile2].word(); 
    else
        s1 = itiles[tile1].word()+ " " + itiles[tile2].word();


    return s1;

}

bool Board::solved()
{
    bool done = true;
    for(int x = 0; x < itiles.size(); x++)
    {
        if(itiles[x].matched() != true)
            done = false;

    }

    return done;

}

std::string Board::to_string()
{
    return "potato";

}






