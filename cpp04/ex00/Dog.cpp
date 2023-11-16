#include "Dog.hpp"

Dog::Dog ():Animal("dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog (const Dog &a):Animal(a)
{
	// if(this != &a)
	// 	type=a.getType();
}
Dog::~Dog ()
{
	std::cout << "Dog distructor called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Bark!!" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}