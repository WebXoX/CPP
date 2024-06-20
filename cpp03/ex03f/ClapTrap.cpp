#include "ClapTrap.hpp"

ClapTrap::ClapTrap ():name("john doe"),healthStat(10),energyStat(10),attackStat(0)
{
	this->healthinit = this->healthStat;
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap (std::string name , int health, int energy, int attack):name(name),healthStat(health),energyStat(energy),attackStat(attack), healthinit(health)
{
	this->healthinit = this->healthStat;
	std::cout << "value clap "<< ClapTrap::healthStat  << std::endl;
	std::cout << "ClapTrap constructor called" << std::endl;

}

ClapTrap::ClapTrap (const ClapTrap &a)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = a;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap  distructor called" << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
	if(this->energyStat != 0 && this->healthStat != 0)
	{
		this->energyStat -= 1;
		std::cout << "ClapTrap " << this->name <<" attacks " << target <<  " energy "<< this->energyStat<< std::endl;
	}
	else if(this->healthStat <= 0)
		std::cout << "ClapTrap: player " << this->name <<" can not attack he is already dead! " << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name <<" has no energy " << std::endl;
	}

}
ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap copy assignment operator = " << std::endl;
	*this=(rhs);
	return(*this);
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->energyStat != 0 && this->healthStat != 0)
	{
		this->energyStat -= 1;
		this->healthStat -= amount;
		std::cout << "causing " << amount <<" points of damage! energy "<< this->energyStat << std::endl;
		if (healthStat <= 0)
		{
			std::cout << "ClapTrap: player " << this->name << " has died! " << std::endl;
		}
	}
	else if(this->healthStat <= 0)
		std::cout << "ClapTrap: player " << this->name <<" is already dead! " << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name <<" has no energy " << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyStat != 0 && amount <= this->healthinit && amount >= 0 )
	{
		this->energyStat -= 1;
		this->healthStat += amount;
		std::cout << "repaired " << amount <<" points of damage taken! " << std::endl;
	}
	else if(this->energyStat != 0 &&( amount >= this->healthinit ||  amount < 0))
		std::cout << "ClapTrap " << this->name <<" can only repair till " <<this->healthinit << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name <<" has no energy " << std::endl;
	}
}