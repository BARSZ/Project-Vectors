#include "Point.h"
Point::Point(double x, double y, double z) : x(x), y(y), z(z)
{

}
Point::Point(const Point& rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
}

double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}
double Point::getZ() const
{
	return z;
}
Point& Point::operator=(const Point& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	return *this;
}