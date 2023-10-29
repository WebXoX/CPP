#pragma once
#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include <cmath>
#include "Fixed.hpp"
class Point 
{
	public:
    	Point ();
    	Point (Fixed x, Fixed y);
    	Point (const Point &a);
    	~Point ();
		Point& operator=(const Point &a);
		Fixed getPointX( void );
		Fixed getPointY( void );

	private:
		const Fixed x;
		const Fixed y;
};
	std::ostream& operator<<(std::ostream& os, const Fixed& f);
#endif
