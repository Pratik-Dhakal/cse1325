#include <iostream>
#include "Board.h"

int main()
{
    int num{};
    std::cout<<"Number of Tiles? ";
    std::cin>>num;
    Board b1(num);


    //std::cout<<s1;

    int guess=0,t1,t2;

    

    while(!b1.solved())
    {
        std:: string s1 = b1.to_string();
        std::cout<<"Guess "<< guess <<" select 2 unmatched tiles or enter 0 0 to quit: "<<std::endl;
        std::cout<<s1;
        std::cin>> t1 >> t2;

        std::cout<<(b1.attempt(t1,t2));

        std::cout<<"\n";

    };

    std::cout<<b1.to_string();
    std::cout<<"\n\nWINNER!!!!!\n\n";





    return 0;
}