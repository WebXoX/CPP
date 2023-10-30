#include"Point.hpp"

Point::Point ():x(),y()
{
    std::cout << "Point default constructor called!!" << std::endl;
}
Point::Point (const float x, const float y):x(x),y(y)
{
    std::cout << "Point constructor called!!" << std::endl;
}
Point::Point (Fixed x, Fixed y):x(x), y(y)
{
    std::cout << "Point constructor called!!" << std::endl;
}
Point::Point (const Point &a):x(a.x), y(a.y)
{
    std::cout << "Point copy constructor called!!" << std::endl;
}

Point& Point::operator=(const Point &a)
{
    std::cout << "Point copy constructor called!!" << std::endl;
    *this = a;
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