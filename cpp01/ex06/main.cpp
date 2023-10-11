#include "Harl.hpp"
#include <iostream>
#include <string>


int main (int argc, char **argv)
{
    Harl h;
    if (argc == 2)
    {
        h.complain(argv[1]);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
}