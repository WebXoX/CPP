#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap ():ScavTrap(),FragTrap()
{
	this->name = "john doe";
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap (std::string name):ScavTrap(name),FragTrap(name)
{
	this->name = name;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &a)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap::~DiamondTrap ()
{
	std::cout << "DiamondTrap  distructor called" << std::endl;
}
void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &a)
{
	std::cout << "ClapTrap copy assignment operator = " << std::endl;
	*this=(a);
	return(*this);
}