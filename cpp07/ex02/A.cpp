#include "A.hpp"
#include <stdio.h>
#include <cerrno>
/* orth A / constructor*/
A::A ()
{
	std::cout << "A default constructor" << std::endl;
}
A::A (const A &a)
{
	std::cout << "A copy constructor " << std::endl;
	*this = a;
}
A::~A ()
{
	std::cout << "A distructor called" << std::endl;
}
A& A::operator=(const A& rhs)
{
    if (this != &rhs)
    {
        std::cout << "A copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth A */
/* extra */
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

