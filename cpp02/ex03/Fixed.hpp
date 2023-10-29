#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include <cmath>
class Fixed 
{
	public:
    	Fixed ();
    	Fixed (const int numb);
    	Fixed (const float numb);
    	Fixed (const Fixed &a);
    	~Fixed ();
		Fixed& operator=(const Fixed &a);
		Fixed& operator!=(const Fixed &a);
		Fixed& operator>=(const Fixed &a);
		Fixed& operator<=(const Fixed &a);
		Fixed& operator>(const Fixed &a);
		Fixed& operator<(const Fixed &a);
		Fixed& operator+(const Fixed &a);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator-(const Fixed &a);
		Fixed& operator--();
		Fixed operator--(int);
		Fixed& operator/(const Fixed &a);
		Fixed& operator*(const Fixed &a);
		const static Fixed& max(const Fixed &a,const Fixed &b);
		const static Fixed& min(const Fixed &a,const Fixed &b);
		static Fixed& max( Fixed &a, Fixed &b);
		static Fixed& min( Fixed &a, Fixed &b);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int number;
		static const int fractional_bit=8;
};
	std::ostream& operator<<(std::ostream& os, const Fixed& f);
#endif
