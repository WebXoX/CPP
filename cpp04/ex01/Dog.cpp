#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog ():Animal("dog")
{
	this->brains = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog (const Dog &a):Animal(a)
{
	if(this != &a)
	{
		type=a.getType();
		for (size_t i = 0; i < 100; i++)
		{
			brains->getIdeas()[i]=a.getBrains()->getIdeas()[i];
		}
	}
}
Dog::~Dog ()
{
	delete brains;
	std::cout << "Dog distructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator = " << std::endl;
	if(this != &rhs)
	{
		type=rhs.getType();
		for (size_t i = 0; i < 100; i++)
		{
			brains->getIdeas()[i]=rhs.getBrains()->getIdeas()[i];
		}
	}
	return(*this);
}
Brain* Dog::getBrains()	const
{
 return(this->brains);
}
void Dog::makeSound() const
{
	std::cout << "Bark!!" << std::endl;
}