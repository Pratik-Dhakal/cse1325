#include <iostream>
#include <ctime>

int roll(int die_num,int faces, int rolls);
int main()
{
    srand (time(NULL));
    int die_num,faces,rolls;

    std::cout<<"Number of dice? ";
    std::cin>>die_num;
    std::cout<<"Number of faces per die? ";
    std::cin>>faces;
    std::cout<<"Number of rolls? ";
    std::cin>>rolls;

    int play = roll(die_num,faces,rolls);

    return 0;
}

int roll(int die_num,int faces, int rolls)
{
    int sum = 0,num = 0;
    for(int x = 0; x < rolls; x++)
    {
        std::cout << "Roll "<< x << ": ";
        for(int y = 0; y < die_num; y++)
        {
            num = rand()%faces+1;
            std::cout<<num<< " ";
            sum += num;
        }
        std::cout<<"Sum: "<< sum<<std::endl;
        sum = 0;

    }

    return 0;
}