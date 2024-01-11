#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat ():Animal("cat")
{
	this->brains = new Brain();

	std::cout << "Cat default constructor" << std::endl;

}

Cat::Cat (const Cat &a): Animal()
{
	this->type = a.getType();
	this->brains = new Brain(*(a.getBrains()));
}
Cat::~Cat ()
{
	delete this->brains;
	std::cout << "Cat distructor called" << std::endl;
}
Brain *Cat::getBrains() const
{
 return(this->brains);
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	if(this != &rhs)
	{
		delete brains;
		this->type = rhs.getType();
		this->brains = new Brain(*(rhs.getBrains()));
	}
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "meow!!" << std::endl;
}