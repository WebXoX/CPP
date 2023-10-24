#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Fixed 
{
	public:
    	Fixed ();
    	Fixed (const Fixed &a);
    	~Fixed ();
		void operator=(const Fixed &a);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
	int number;
	static const int fractional_bit=8;
};
#endif
