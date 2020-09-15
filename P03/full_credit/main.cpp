#include <iostream>

int main()
{
    int guess{0};

    for(int x = 0; x < 10; x++)
    {
        std::cout<<"Guess "<< guess <<", select 2 unmatched tiles: "<<std::endl;
        guess++;
    }
    return 0;
}