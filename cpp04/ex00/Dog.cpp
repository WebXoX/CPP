#include "Dog.hpp"

Dog::Dog ()
{
	std::cout << "Dog default constructor" << std::endl;

}
Dog::Dog (std::string type)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = type;
}
Dog::Dog (const Dog &a)
{

}
Dog::~Dog ()
{
	std::cout << "Dog distructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator = " << std::endl;
	*this=(rhs);
	return(*this);
}
Dog::makeSound()
{
	std::cout << "Bark!!" << std::endl;
}