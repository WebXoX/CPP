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

}
Animal::~Animal ()
{
	std::cout << "Animal distructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment operator = " << std::endl;
	*this=(rhs);
	return(*this);
}
Animal::makeSound()
{
	std::cout << "Sound!!" << std::endl;
}