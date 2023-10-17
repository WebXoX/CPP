#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "john doe";
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << HumanB::name << " attacks with their " << this->danger->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &type)
{
	this->danger = &type;
}
