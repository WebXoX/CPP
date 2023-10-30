#include "ScavTrap.hpp"
ScavTrap::ScavTrap ():name("john doe"),healthStat(100),energyStat(50),attackStat(20)
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap (std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->healthStat = 100;
	this->energyStat= 50;
	this->attackStat = 20;
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
	std::cout << "ClapTrap copy assignment operator = " << std::endl;
	*this=(a);
	return(*this);
}