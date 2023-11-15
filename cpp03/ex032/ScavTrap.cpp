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
void ScavTrap::attack(const std::string& target)
{
	if(this->energyStat != 0 && this->healthStat != 0)
	{
		this->energyStat -= 1;
		std::cout << "ScavTrap " << this->name <<" attacks " << target << ", causing " << this->attackStat<<" points of damage! " <<" energy left: "<< this->energyStat<< std::endl;
	}
	else if(this->healthStat <= 0)
		std::cout << "ScavTrap: player " << this->name <<" can not attack he is already dead! " << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name <<" has no energy " << std::endl;
	}

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