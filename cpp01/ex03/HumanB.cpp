#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "john doe";
	this->danger = Weapon();
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->danger = Weapon();
}

void HumanB::attack()
{
	std::cout << HumanB::name << " attacks with their " << this->danger.getType() << std::endl;
}
void HumanB::setWeapon(Weapon type)
{
	this->danger = type;
}
