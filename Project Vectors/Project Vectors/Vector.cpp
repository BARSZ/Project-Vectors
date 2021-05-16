#include "Vector.h"
Vector::Vector(double x, double y, double z) : Point(x, y, z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector::Vector(const Point& A, const Point& B)
{
	this->x = B.getX() - A.getX();
	this->y = B.getY() - A.getY();
	this->z = B.getZ() - A.getZ();
}
double Vector::CalculateLenghtVector()
{
	double lenght = sqrt(x * x + y * y + z * z);
	return lenght;
}
bool Vector::IsNullVector()
{
	bool isNull = false;
	if (x == y && y == z && z == 0)
	{
		isNull = true;
	}
	return isNull;
}
