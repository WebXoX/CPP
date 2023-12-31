#include "Animal.hpp"

Animal::Animal ()
{
	std::cout << "Animal default constructor" << std::endl;

}
Animal::Animal (std::string type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
}
Animal::Animal (const Animal &a)
{
	if(this != &a)
		type=a.getType();
}
Animal::~Animal ()
{
	std::cout << "Animal distructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}
std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Sound!!" << std::endl;
}