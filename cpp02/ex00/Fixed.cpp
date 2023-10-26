#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed default constructor " << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Fixed copy constructor " << std::endl;
	*this = a;
}
Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	this->number  = rhs.getRawBits();
	return(*this);
}
Fixed::~Fixed ()
{
	std::cout << "Fixed distructor called" << std::endl;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "Fixed getRawBits() called" << std::endl;
	return this->number;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "Fixed setRawBits() called" << std::endl;
	this->number = raw;
}


