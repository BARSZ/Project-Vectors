#pragma once
#include "Vector.h"
#include "EqualPointException.h"
class Triangle : public Point
{
public:
	Triangle(Point A, Point B, Point C);
	void print();
	bool if2SidesEqual();
	bool if3SidesEqual();
	bool if90();
	bool ifLess90();
	bool ifGreater90();
	double area();
	double getPerimeter();
	Point medicenter();
	bool checkPlain(Point a);
	unsigned char positioned(Point a);

private:
	Point A, B, C;
	// The triangle sides are calculated and sorted by size in A1, A2, A3
	double A1, A2, A3;
};
bool operator < (Point a, Triangle t);
bool operator > (Point a, Triangle t);
bool operator == (Point a, Triangle t);
