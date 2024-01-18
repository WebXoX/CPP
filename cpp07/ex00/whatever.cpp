#include "whatever.hpp"
#include <stdio.h>
#include <cerrno>
/* orth whatever / constructor*/
whatever::whatever ()
{
	std::cout << "whatever default constructor" << std::endl;
}
whatever::whatever (const whatever &a)
{
	std::cout << "whatever copy constructor " << std::endl;
	*this = a;
}
whatever::~whatever ()
{
	std::cout << "whatever distructor called" << std::endl;
}

whatever& whatever::operator=(const whatever& rhs)
{
    if (this != &rhs)
    {
        std::cout << "whatever copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth whatever */
/* extra */
/* extra */
/* getters */
/* getters */
/* Exceptions */
template <typename T>
T max(T a, T b)
{
	return (a > b ? a : b);
}
template <typename T>
T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>
T min(T a, T b)
{
	return (a < b ? a : b);
}
/* Exceptions */

