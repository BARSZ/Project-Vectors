#pragma once
#include <iostream>
class Point
{
private:
	double x;
	double y;
	double z;
public:
	Point(double, double, double);
	Point(const Point&);
	~Point();
	Point& operator=(const Point&);
	double getX(const Point&) const;
	double getY(const Point&) const;
	double getZ(const Point&) const;
};
