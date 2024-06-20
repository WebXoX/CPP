#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap ():ScavTrap("john doe"),FragTrap("john doe")
{
	this->name = "john doe";
	ClapTrap::name = "john doe_clap_name";
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap (std::string name):ScavTrap(name),FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name+"_clap_name";
	ClapTrap::healthStat = 100;
	ClapTrap::energyStat = 50;
	ClapTrap::attackStat = 30;
	
	std::cout <<"name :->" << this->name << " clap name :->" << ClapTrap::name << std::endl;
	std::cout <<"name :->" << ClapTrap::healthStat << " clap name :->" << FragTrap::healthStat << std::endl;
	std::cout <<"name :->" << ClapTrap::energyStat << " clap name :->" << ScavTrap::energyStat << std::endl;
	std::cout <<"name :->" << ClapTrap::attackStat << " clap name :->" << FragTrap::attackStat << std::endl;
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