#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    v.push_back(5);

    for(int x = 0; x < 5; x++)
        v[x] = x;

    std::cout<<v[1];
    return 0;

}