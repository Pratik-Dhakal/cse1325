#include <iostream>


class Tile
{
    std::string _word;
    bool _matched;
    static int _width;
    static std::string _blank;

    public:
        Tile(std::string word)
        {
            _word = word;

        }

        bool match(Tile& tile)
        {


        }

        std::string word()
        {

        }

        bool matched()
        {
            

        }

        int width()
        {

        }

        std::string to_string()
        {
            if(matched())
                return _word;
            else
                return _blank;            

        }




};

int Tile:: _width = -1;