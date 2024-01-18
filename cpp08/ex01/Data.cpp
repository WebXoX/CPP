#include "Data.hpp"
#include <stdio.h>
#include <cerrno>
/* orth Data / constructor*/
Data::Data ()
{
	std::cout << "Data default constructor" << std::endl;
}
Data::Data(std::string name,int age,std::string gender,std::string nationality): name(name),age(age),gender(gender),nationality(nationality)
{
	std::cout << "Data constructor" << std::endl;
}


Data::Data (const Data &a)
{
	std::cout << "Data copy constructor " << std::endl;
	*this = a;
}

Data::~Data ()
{
	std::cout << "Data distructor called" << std::endl;
}

Data& Data::operator=(const Data& rhs)
{
    if (this != &rhs)
    {
        std::cout << "Data copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth Data */
/* extra */
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

