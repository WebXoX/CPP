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
