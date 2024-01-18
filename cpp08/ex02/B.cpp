#include "B.hpp"
#include <stdio.h>
#include <cerrno>
/* orth B / constructor*/
B::B ()
{
	std::cout << "B default constructor" << std::endl;
}
B::B (const B &a)
{
	std::cout << "B copy constructor " << std::endl;
	*this = a;
}

B::~B ()
{
	std::cout << "B distructor called" << std::endl;
}

B& B::operator=(const B& rhs)
{
    if (this != &rhs)
    {
        std::cout << "B copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth B */
/* extra */
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

