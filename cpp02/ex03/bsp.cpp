#include "Point.hpp"
Fixed areaT( Point  a, Point  b, Point  c)
{
	return(abs((a.getPointX().toInt() *(b.getPointY().toInt() - c.getPointY().toInt())) + (b.getPointX().toInt()*(c.getPointY().toInt()- a.getPointY().toInt()))+ (c.getPointX().toInt()*(a.getPointY().toInt() - b.getPointY().toInt())))/(float)2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = areaT(a,b,c);
    Fixed area1 =  areaT(point,b,c);
    Fixed area2 =  areaT(a,point,c);
    Fixed area3 =  areaT(a,b,point);
	
	if(area1.toInt()!=0 && area2.toInt() != 0 && area3.toInt() !=0 && area.toInt() == area1.toInt() + area2.toInt() + area3.toInt())
		return (true);
	else
		return (false);
}