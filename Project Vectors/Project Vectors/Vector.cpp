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
Vector Vector::CalculateDirection()
{
	if (this->CalculateLenghtVector() == 0)
	{
		//Exception
	}
	else
	{
		double i = x / sqrt(x * x + y * y + z * z);
		double j = y / sqrt(x * x + y * y + z * z);
		double k = z / sqrt(x * x + y * y + z * z);

		Vector v1(i, j, k);
		return v1;
	}
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
bool Vector::AreParallel(Vector& v2)
{
	bool areParallel = false;

	if ((x / v2.getX()) == (y / v2.getY())  && (y / v2.getY()) == (z / v2.getZ()))
	{
		areParallel = true;
	}
	if (this->CalculateLenghtVector() == 0 || v2.CalculateLenghtVector() == 0)
	{
		//Exception
	}
	return areParallel;
}
bool Vector::ArePerpendicular(Vector& v2)
{
	bool arePerpendicular = false;

	if ((x * v2.getX() + y * v2.getY() + z * v2.getZ()) == 0)
	{
		arePerpendicular = true;
	}
	if (this->IsNullVector() || v2.IsNullVector())
	{
		//Exception
	}
	return arePerpendicular;
}