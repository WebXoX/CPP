#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap ():ScavTrap("john doe"),FragTrap("john doe")
{
	this->name = "john doe";
	ClapTrap::name = name+"_clap_name";
	this->attackStat = FragTrap::attackStat;
	this->healthStat = FragTrap::healthStat;
	this->energyStat = ScavTrap::energyStat;
	std::cout << "DiamondTrap default constructor" << std::endl;
	std::cout << "DiamondTrap constructor called " << this->healthStat << " "<< FragTrap::attackStat << " " << this->energyStat << std::endl;
	std::cout << "DiamondTrap constructor called " << FragTrap::attackStat << " "<< FragTrap::attackStat << " " << FragTrap::healthStat << std::endl;
	std::cout << "DiamondTrap constructor called " <<  ScavTrap::energyStat << " "<< FragTrap::attackStat << " " << this->energyStat << std::endl;
}

DiamondTrap::DiamondTrap (std::string name):ScavTrap(name),FragTrap(name)
{
	this->name = name;
	// ClapTrap::name = name+"_clap_name";
	// this->attackStat = FragTrap::attackStat;
	// this->healthStat = FragTrap::healthStat;
	// this->energyStat = ScavTrap::energyStat;
	std::cout << "DiamondTrap constructor called " << this->healthStat << " "<< FragTrap::attackStat << " " << this->energyStat << std::endl;
	std::cout << "DiamondTrap constructor called " << FragTrap::attackStat << " "<< FragTrap::attackStat << " " << FragTrap::healthStat << std::endl;
	std::cout << "DiamondTrap constructor called " <<  ScavTrap::energyStat << " "<< FragTrap::attackStat << " " << this->energyStat << std::endl;
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
	std::cout << "My name is " << this->name << " ClapTrap name is " << ClapTrap::name << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &a)
{
	std::cout << "DiamondTrap copy assignment operator = " << std::endl;
	*this=(a);
	return(*this);
}