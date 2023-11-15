#include "Point.hpp"
int abs(int x)
{
	if(x >=0)
		return x;
	else
		return -x;
}
Fixed areaT( Point  a, Point  b, Point  c)
{
	return(abs((a.getPointX().toFloat() *(b.getPointY().toFloat() - c.getPointY().toFloat())) + (b.getPointX().toFloat()*(c.getPointY().toFloat()- a.getPointY().toFloat()))+ (c.getPointX().toFloat()*(a.getPointY().toFloat() - b.getPointY().toFloat())))/(float)2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = areaT(a,b,c);
    Fixed area1 =  areaT(point,b,c);
    Fixed area2 =  areaT(a,point,c);
    Fixed area3 =  areaT(a,b,point);
	std::cout << area.toFloat()<< std::endl;
	std::cout << area1.toFloat()<< std::endl;
	std::cout << area2.toFloat()<< std::endl;
	std::cout << area3.toFloat()<< std::endl;
	std::cout << area1.toFloat()+ area2.toFloat()+area3.toFloat()<< std::endl;

	if(area1.toFloat()!=0 && area2.toFloat() != 0 && area3.toFloat() !=0 && area.toFloat() == area1.toFloat() + area2.toFloat() + area3.toFloat())
		return (true);
	else
		return (false);
}