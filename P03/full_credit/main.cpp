#include <iostream>
#include "Board.h"

int main()
{
    int num{};
    std::cout<<"Number of Tiles? ";
    std::cin>>num;
    Board b1(num);

    std:: string s1 = b1.to_string();

    std::cout<<s1;


    return 0;
}