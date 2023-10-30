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
	std::cout << "Fixed copy assignment operator = " << std::endl;
	this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator!=(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator != " << std::endl;
	if (this->number != rhs.getRawBits())
		this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator>=(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator >=" << std::endl;
	if (this->number >= rhs.getRawBits())
		this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator<=(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator <=" << std::endl;
	if (this->number <= rhs.getRawBits())
		this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator>(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator >" << std::endl;
	if (this->number > rhs.getRawBits())
		this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator<(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator <" << std::endl;
	if (this->number < rhs.getRawBits())
		this->number = (rhs.getRawBits());
	return(*this);
}
Fixed& Fixed::operator+(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	
	this->number = toFloat() + rhs.toFloat() * (1 << fractional_bit);
	return(*this);
}
Fixed& Fixed::operator++()
{
	std::cout << "Fixed copy assignment operator ++" << std::endl;
	
	this->number++;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	std::cout << "Fixed copy assignment operator ++" << std::endl;
	Fixed temp;
	temp.setRawBits(this->getRawBits());
	this->number++;
	return(temp);
}
Fixed& Fixed::operator*(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	
	this->number = toFloat() *  rhs.toFloat() * (1 << fractional_bit);
	return(*this);
}
Fixed& Fixed::operator-(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	this->number = toFloat() -  rhs.toFloat() * (1 << fractional_bit);
	return(*this);
}
Fixed& Fixed::operator--()
{
	std::cout << "Fixed copy assignment operator --" << std::endl;
	
	this->number--;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	std::cout << "Fixed copy assignment operator --" << std::endl;
	Fixed temp;
	temp.setRawBits(this->getRawBits());
	this->number--;
	// this->number = toFloat() + rhs.toFloat() * (1 << fractional_bit);
	return(temp);
}
Fixed& Fixed::operator/(const Fixed &rhs)
{
	std::cout << "Fixed copy assignment operator " << std::endl;
	this->number = toFloat() /  rhs.toFloat() * (1 << fractional_bit);
	return(*this);
}
std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os<< f.toFloat();
	return os;
}
Fixed& Fixed::max( Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return(a);
	return(b);
}
Fixed& Fixed::min( Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return(a);
	return(b);
}
const Fixed& Fixed::max(const Fixed &a,const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return(a);
	return(b);
}
const Fixed& Fixed::min(const Fixed &a,const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return(a);
	return(b);
}

int Fixed::toInt( void ) const
{
	return roundf(this->number >> this->fractional_bit);
}
float Fixed::toFloat( void ) const
{
	return (double)this->number / (double)(1 << this->fractional_bit) ;
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


