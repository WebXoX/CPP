#include "Cat.hpp"

Cat::Cat ()
{
	std::cout << "Cat default constructor" << std::endl;

}
Cat::Cat (std::string type)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = type;
}
Cat::Cat (const Cat &a)
{

}
Cat::~Cat ()
{
	std::cout << "Cat distructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	*this=(rhs);
	return(*this);
}
Cat::makeSound()
{
	std::cout << "Sound!!" << std::endl;
}