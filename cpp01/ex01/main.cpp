#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name );

int main ( )
{
    Zombie *zman;
    zman = zombieHorde(5,"Foo");
    for (size_t i = 0; i < 5; i++)
    {
        zman[i].announce();
    }
    delete [] zman;
}