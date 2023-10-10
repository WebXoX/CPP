#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zman(name);
	zman.announce();
}