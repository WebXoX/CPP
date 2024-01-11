#include "WrongCat.hpp"

WrongCat::WrongCat ():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor" << std::endl;

}

WrongCat::WrongCat (const WrongCat &a):WrongAnimal(a)
{
	// if(this != &a)
	// 	type=a.getType();
}
WrongCat::~WrongCat ()
{
	std::cout << "WrongCat distructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}
void WrongCat::makeSound() const
{
	std::cout << "WrongAnimal sound!!" << std::endl;
}