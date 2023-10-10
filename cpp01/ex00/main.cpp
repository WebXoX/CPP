#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main ( )
{
    Zombie *zman;
    zman = newZombie("Foo");
    randomChump("Bar");
    zman->announce();
    delete zman;
}