#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat ():Animal()
{
	this->brains = new Brain();

	std::cout << "Cat default constructor" << std::endl;

}
Cat::Cat (std::string type):Animal(type)
{
	this->brains = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat (const Cat &a)
{
	(*this) = a;
}
Cat::~Cat ()
{
	delete this->brains;
	std::cout << "Cat distructor called" << std::endl;
}
Brain *Cat::getBrains()
{
 return(this->brains);
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	*this=(rhs);
	return(*this);
}
void Cat::makeSound() const
{
	std::cout << "meow!!" << std::endl;
}