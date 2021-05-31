#include "Point.h"
Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Point::Point(const Point& rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
}
Point& Point::operator=(const Point& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	return *this;
}
bool operator==(Point p1, Point p2)
{
	bool match = false;
	if (p1.getX() == p2.getX() && p1.getY() == p2.getY() && p1.getZ() == p2.getZ())
	{
		match = true;
	}
	return match;
}