#include "notCat.hpp"

notCat::notCat ():notAnimal()
{
	std::cout << "notCat default constructor" << std::endl;

}
notCat::notCat (std::string type):notAnimal(type)
{
	std::cout << "notCat constructor called" << std::endl;
}
// notCat::notCat (const notCat &a)
// {
// 	if(this != &a)
// 		type=a.getType();
// }
notCat::~notCat ()
{
	std::cout << "notCat distructor called" << std::endl;
}

notCat& notCat::operator=(const notCat &rhs)
{
	std::cout << "notCat copy assignment operator = " << std::endl;
	if(this != &rhs)
		type=rhs.getType();
	return(*this);
}
void notCat::makeSound() const
{
	std::cout << "WrongAnimal sound!!" << std::endl;
}