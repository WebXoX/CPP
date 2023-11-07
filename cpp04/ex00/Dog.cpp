#include "Dog.hpp"

Dog::Dog ():Animal()
{
	std::cout << "Dog default constructor" << std::endl;
}
Dog::Dog (std::string type):Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog (const Dog &a)
{
	*this=(a);
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
void Dog::makeSound() const
{
	std::cout << "Bark!!" << std::endl;
}