#include "ScavTrap.hpp"
ScavTrap::ScavTrap ():ClapTrap("john doe",100,50,20)
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap (std::string name):ClapTrap(name,100,50,20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &a)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = a;
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap  distructor called" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode!!" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "ScavTrap copy assignment operator = " << std::endl;
	*this=(a);
	return(*this);
}