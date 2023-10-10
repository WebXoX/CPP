#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );


int main ( )
{
    Zombie *zman;
    zman = zombieHorde(2,"Foo");
    zman[0].announce();
    zman[1].announce();
    zman[2].announce();
    zman[3].announce();
    zman[4].announce();
    delete [] zman;
}