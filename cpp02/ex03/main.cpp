#include "Point.hpp"
#include "Fixed.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
Point a =Point(0, 0) ;
Point b = Point(10, 30) ;
Point c = Point(20, 0) ;
int points[4][2] = {
    {30, 15},
    {-1, 2},
    {1, 1},
    {0,100}
};
for(int i = 0 ; i<4;i++)
{
	Point d = Point(points[i][0],points[i][1]) ;
	if(bsp(a,b,c,d))
	{
		std::cout << "Point {" << points[i][0] << ", "<< points[i][1] <<"} is inside the triangle" << std::endl;
	}
	else
	{
		std::cout << "Point {" << points[i][0] << ", "<< points[i][1] <<"}  is outside the triangle" << std::endl;
	}
}

return 0;
}