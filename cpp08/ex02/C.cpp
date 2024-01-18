#include "C.hpp"
#include <stdio.h>
#include <cerrno>
/* orth C / constructor*/
C::C ()
{
	std::cout << "C default constructor" << std::endl;
}
C::C (const C &a)
{
	std::cout << "C copy constructor " << std::endl;
	*this = a;
}
C::~C ()
{
	std::cout << "C distructor called" << std::endl;
}
C& C::operator=(const C& rhs)
{
    if (this != &rhs)
    {
        std::cout << "C copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth C */
/* extra */
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

