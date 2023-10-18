#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "John Doe";
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << this->name << " the Human was turned into a Zombie" << std::endl;
}
Zombie::~Zombie( )
{
	std::cout << this->name << " the zombie was Destroyed" << std::endl;
}
void Zombie::announce( void )
{
	std::cout << Zombie::name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}