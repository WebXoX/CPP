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
    	Point (	const float x, const float y);
    	Point (	Fixed x, Fixed y);
    	Point (const Point &a);
    	~Point ();
		Point& operator=(const Point &a);
		Fixed getPointX( void );
		Fixed getPointY( void );
		bool bsp( Point const a, Point const b, Point const c, Point const point);

	private:
		const Fixed x;
		const Fixed y;
};
#endif



 