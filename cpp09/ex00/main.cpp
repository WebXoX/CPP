#include <iostream>
#include <algorithm>
#include <vector>
#include "easyfind.hpp"
int main()
{
    std::vector<int> vec ;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try
    {
        std::cout << "Value : " << easyfind(vec,13) << std::endl;
    }
    catch (const char *msg)
    {
        std::cerr << msg << std::endl;
    }

    return 0;
}