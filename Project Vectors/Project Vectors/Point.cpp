#include "Point.h"
Point::Point(double x, double y, double z)
{

}
Point::Point(const Point& rhs)
{

}
Point::~Point()
{

}
double Point::getX(const Point& p) const
{
	return p.x;
}
double Point::getY(const Point& p) const
{
	return p.y;
}
double Point::getZ(const Point& p) const
{
	return p.z;
}
Point& Point::operator=(const Point& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	return *this;
}