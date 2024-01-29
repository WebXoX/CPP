#include <iostream>
#include <algorithm>
#include <map>
#include "BitcoinExchange.hpp"

int validefile(char *str)
{
    std::string s = str;
    if (s.find(".txt") != std::string::npos)
        return 1;
    return 0;
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange b;
        if (validefile(argv[1]) == 0)
        {
            std::cout << "Error: file not found" << std::endl;
            return 0;
        }
        b.makeForm(str2, str3);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}