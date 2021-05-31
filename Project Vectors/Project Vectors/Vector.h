#pragma once
#include <cmath>
#include "VectorLengthException.h";
#include "Point.h"
class Vector : public Point
{
public:
	Vector(double = 0, double = 0, double = 0);
	~Vector() = default;
	Vector(const Point&, const Point&);
	double CalculateLenghtVector();
	bool IsNullVector();
	Vector CalculateDirection();
	bool AreParallel(Vector&);
	bool ArePerpendicular(Vector&);
	//Vector& operator=(const Vector&);
	Vector operator()(Vector, Vector);
private:
};
Vector operator+(Vector, Vector);
Vector operator-(Vector, Vector);
Vector operator*(Vector, int);
Vector operator*(Vector, Vector);



