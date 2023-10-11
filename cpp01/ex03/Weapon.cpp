#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type.clear();
}

Weapon::Weapon( std::string type )
{
	this->type = type;
}
Weapon::~Weapon( )
{
	// std::cout << "object Destroyed" << std::endl;
}

std::string& Weapon::getType()
{
	return(this->type);
}
void Weapon::setType( std::string type )
{
	this->type = type;
}