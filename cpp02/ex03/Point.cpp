#include"Point.hpp"

Point::Point ()
{
    std::cout << "Point default constructor called!!" << std::endl;
    this->x = Fixed();
    this->y = Fixed();
}
Point::Point (Fixed x, Fixed y)
{
    std::cout << "Point constructor called!!" << std::endl;
    this->x = x;
    this->y = y;
}
Point::Point (const Point &a)
{
    std::cout << "Point copy constructor called!!" << std::endl;
	this->x = a->x.getRawBits();
	this->y = a->y.getRawBits();
}

Point& Point::operator=(const Point &a)
{

    std::cout << "Point copy constructor called!!" << std::endl;
	this->x = a.getPointX().getRawBits();
	this->y = a.getPointY().getRawBits();
    return(*this);
}

Point::~Point ()
{
    std::cout << "Point distructor called!!" << std::endl;
}

Fixed Point::getPointX( void ) 
{
    return (this->x);
}
Fixed Point::getPointY( void ) 
{
    return (this->y);
}