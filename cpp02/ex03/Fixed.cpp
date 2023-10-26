#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed default constructor " << std::endl;
	this->number = 0;
}
Fixed::Fixed(const int numb)
{
	std::cout << "Fixed  constructor with int argument" << std::endl;
	this->number = numb * 1 << fractional_bit;
}

Fixed::Fixed(const float float_numb)
{
	std::cout << "Fixed  constructor with int argument" << std::endl;
	
	this->number = (roundf((float)float_numb * (1 << fractional_bit)));
}
Fixed::Fixed(const Fixed &a)
{
	std::cout << "Fixed copy constructor " << std::endl;
	*this = a;
}

Fixed::~Fixed ()
{
	std::cout << "Fixed distructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	this->number = (rhs.getRawBits());
	return(*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os<< f.toFloat();
	return os;
}

int Fixed::toInt( void ) const
{
	return roundf(this->number >> this->fractional_bit);
}
float Fixed::toFloat( void ) const
{
	return (double)this->number / (double)(1 << this->fractional_bit);
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


