#include "Point.hpp"
#include "Fixed.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
Point a = Point(0.0,0.0) ;
Point b = Point(10.0,30.0) ;
Point c = Point(20.0,0.0) ;
Point d = Point(20.0,0.0) ;
if(bsp(a,b,c,d))
	std::cout << "The Point is inside the triangle" << std::endl;
else
	std::cout << "The Point is outside the triangle" << std::endl;
return 0;
}