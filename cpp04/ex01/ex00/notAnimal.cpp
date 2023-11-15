#include "notAnimal.hpp"

notAnimal::notAnimal ()
{
	std::cout << "notAnimal default constructor" << std::endl;

}
notAnimal::notAnimal (std::string type)
{
	std::cout << "notAnimal constructor called" << std::endl;
	this->type = type;
}
notAnimal::notAnimal (const notAnimal &a)
{
	if(this != &a)
		type=a.getType();
}
notAnimal::~notAnimal ()
{
	std::cout << "notAnimal distructor called" << std::endl;
}

notAnimal& notAnimal::operator=(const notAnimal &rhs)
{
	std::cout << "notAnimal copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}
std::string notAnimal::getType() const
{
	return (this->type);
}

void notAnimal::makeSound() const
{
	std::cout << "Sound!!" << std::endl;
}