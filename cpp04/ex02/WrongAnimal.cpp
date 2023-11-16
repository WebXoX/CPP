#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
	std::cout << "WrongAnimal default constructor" << std::endl;

}
WrongAnimal::WrongAnimal (std::string type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = type;
}
WrongAnimal::WrongAnimal (const WrongAnimal &a)
{
	*this=(a);
}
WrongAnimal::~WrongAnimal ()
{
	std::cout << "WrongAnimal distructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assignment operator = " << std::endl;
	if(this != &rhs)
		this->type=rhs.getType();
	return(*this);
}
std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Sound!!" << std::endl;
}