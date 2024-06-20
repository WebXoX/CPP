#include "FragTrap.hpp"
#include "ClapTrap.hpp"
FragTrap::FragTrap ():ClapTrap("john doe",100,100,30)
{
	std::cout << "FragTrap default constructor" << std::endl;
	std::cout << "value frag "<< ClapTrap::healthStat  << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name,100,100,30)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap (const FragTrap &a)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
}

FragTrap::~FragTrap ()
{
	std::cout << "FragTrap  distructor called" << std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << "Give me a High Five" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &a)
{
	std::cout << "ClapTrap copy assignment operator = " << std::endl;
	*this=(a);
	return(*this);
}