#pragma once
#include <cmath>
#include "Point.h"
class Vector : public Point
{
public:
	Vector(double = 0, double = 0, double = 0);
	Vector(const Point&, const Point&);
	double CalculateLenghtVector();
	bool IsNullVector();
	//virtual ~Vector();
	Vector& operator=(const Vector&);
private:
};

