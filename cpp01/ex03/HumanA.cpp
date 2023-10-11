#include "HumanA.hpp"

HumanA::HumanA()
{
	this->name = "john doe";
	this->danger = Weapon();
}

HumanA::HumanA(std::string name, Weapon type)
{
	this->name = name;
	this->danger = type;
}

void HumanA::attack()
{
	std::cout << HumanA::name << " attacks with their " << this->danger.getType() << std::endl;
}