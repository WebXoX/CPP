#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "John Doe";
}

Zombie::Zombie( std::string name )
{
	this->name = name;
}
Zombie::~Zombie( )
{
	std::cout << this->name << " the zombie was Destroyed" << std::endl;
}
void Zombie::announce( void )
{
	std::cout << Zombie::name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}