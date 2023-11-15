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
	if(this != &a)
		type=a.getType();
}
Cat::~Cat ()
{
	delete brains;
	std::cout << "Cat distructor called" << std::endl;
}
Brain *Cat::getBrains()
{
 return(this->brains);
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}
void Cat::makeSound() const
{
	std::cout << "meow!!" << std::endl;
}