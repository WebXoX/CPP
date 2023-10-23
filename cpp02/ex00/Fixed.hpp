#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>


class Fixed final
{
	public:
    	Fixed ();
    	Fixed (const Fixed &a);
    	~Fixed ();
		Fixed & operator= (const Fixed &a);

	private:
	int number;
};
#endif
