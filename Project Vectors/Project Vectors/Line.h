#pragma once
#include "Vector.h"
class Line : public Vector
{
public:
	Line();
	Line(const Point&, const Vector&);
	Line(const Point&, const Point&);
	Line(double, double, double, double, double, double);
	virtual ~Line();
	Line& operator=(const Line&);
	double setT(double);
	double getSlopeX(const Vector&) const;
private:
	Vector slope;
	double t = 1;
};

