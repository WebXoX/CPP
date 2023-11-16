#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat ():Animal()
{
	this->brains = new Brain;

	std::cout << "Cat default constructor" << std::endl;

}
Cat::Cat (std::string type):Animal(type)
{
	this->brains = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat (const Cat &a): Animal(a)
{
	if(this != &a)
	{
		delete brains;
		brains = new Brain(*(a.getBrains()));
		// type=a.getType();
		// for (size_t i = 0; i < 100; i++)
		// {
		// 	brains->getIdeas()[i]=a.getBrains()->getIdeas()[i];
		// }
	}
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

// Cat& Cat::operator=(const Cat &rhs)
// {
// 	std::cout << "Cat copy assignment operator = " << std::endl;
// 	if(this != &rhs)
// 	{
// 		delete brains;
// 		type=rhs.getType();
// 		brains = new Brain(*(rhs.getBrains()));
// 	}
// 	return(*this);
// }
Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	if (this->brains)
		delete (this->brains);
	this->brains = new Brain(*(rhs.getBrains()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow!!" << std::endl;
}