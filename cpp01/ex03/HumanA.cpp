#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type):danger(type)
{
	this->name = name;
}

void HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with their " << this->danger.getType() << std::endl;
}