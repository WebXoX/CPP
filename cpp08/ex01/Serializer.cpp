#include "Serializer.hpp"
#include <stdio.h>
#include <cerrno>
/* orth Serializer / constructor*/
Serializer::Serializer ()
{
	std::cout << "Serializer default constructor" << std::endl;
}


Serializer::Serializer (const Serializer &a)
{
	std::cout << "Serializer copy constructor " << std::endl;
	*this = a;
}

Serializer::~Serializer ()
{
	std::cout << "Serializer distructor called" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
    if (this != &rhs)
    {
        std::cout << "Serializer copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth Serializer */

/* extra */
	 uintptr_t Serializer::serialize(Data* ptr)
	 {
		return reinterpret_cast<uintptr_t>(ptr);
	 }
	 Data* Serializer::deserialize(uintptr_t raw)
	 {
		return reinterpret_cast<Data*>(raw);
	 }
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

