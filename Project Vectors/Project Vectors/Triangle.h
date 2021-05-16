#pragma once
#include "Point.h"
class Triangle : public Point
{
public:
	Triangle(const Point&, const Point&, const Point&);
	virtual ~Triangle();
	Triangle& operator=(const Triangle&);
private:
	Point A;
	Point B;
	Point C;
};

