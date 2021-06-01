#pragma
#include <iostream>
#include "Element.h"
class Point : public Element
{
public:
	Point(double = 0, double = 0, double = 0);
	Point(const Point&);
	~Point() = default;
	Point& operator=(const Point&);
	void print();
};
char compareDouble(double a, double b);
bool operator==(Point, Point);
