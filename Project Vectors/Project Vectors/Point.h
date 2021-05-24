#pragma
#include <iostream>
#include "Element.h"
class Point
{
protected:
	double x;
	double y;
	double z;
public:
	Point(double = 0, double = 0, double = 0);
	Point(const Point&);
	//~Point();
	Point& operator=(const Point&);
	double getX() const;
	double getY() const;
	double getZ() const;
};
bool operator==(Point, Point);
