#pragma once
#include <iostream>
#include <cmath>
#include "Vector.h"
class Line : public Vector
{
public:
	Line();
	Line(const Point&, const Vector&);
	Line(const Point&, const Point&);
	virtual ~Line();
	Line& operator=(const Line&);
	double getT() const;
	double setT(double);
	Vector getSlope() const;
	Vector getNormVect() const;
	double getAngle(const Line&) const;
	bool operator+ (const Point&);
	bool operator|| (Line&) const;
	bool operator== (Line&) const;
	bool operator&&(Line&) const;
	bool operator!=(Line&) const;
	bool operator|(Line&) const;
private:
	Vector slope;
	double t = 1;
};

