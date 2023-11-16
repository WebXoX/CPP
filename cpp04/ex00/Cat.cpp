#include "Cat.hpp"

Cat::Cat ():Animal("cat")
{
	std::cout << "Cat default constructor" << std::endl;

}
Cat::Cat (const Cat &a):Animal(a)
{
	// if(this != &a)
	// 	type=a.getType();
}
Cat::~Cat ()
{
	std::cout << "Cat distructor called" << std::endl;
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