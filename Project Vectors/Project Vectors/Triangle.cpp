#include "Triangle.h"
#include <iostream>
Triangle::Triangle(Point A, Point B, Point C)
{
	
	if (A == B)
	{
		std::cout << "ERROR A = B: ";
		A.print();
		exit(0);
	}
	if (B == C)
	{
		std::cout << "ERROR B = C: ";
		B.print();
		exit(0);
	}
	if (C == A)
	{
		std::cout << "ERROR C = A: ";
		C.print();
		exit(0);
	}

	this->A = A;
	this->B = B;
	this->C = C;

	/*A.print();
	B.print();
	C.print();*/

	double a1, a2, a3;

	a1 = sqrt((B.getX() - A.getX()) * (B.getX() - A.getX()) +
		(B.getY() - A.getY()) * (B.getY() - A.getY()) +
		(B.getZ() - A.getZ()) * (B.getZ() - A.getZ()));

	a2 = sqrt((C.getX() - B.getX()) * (C.getX() - B.getX()) +
		(C.getY() - B.getY()) * (C.getY() - B.getY()) +
		(C.getZ() - B.getZ()) * (C.getZ() - B.getZ()));

	a3 = sqrt((A.getX() - C.getX()) * (A.getX() - C.getX()) +
		(A.getY() - C.getY()) * (A.getY() - C.getY()) +
		(A.getZ() - C.getZ()) * (A.getZ() - C.getZ()));


	if (a1 <= a2 && a2 <= a3)
	{
		A1 = a1;
		A2 = a2;
		A3 = a3;
	}
	else if (a1 <= a3 && a3 <= a2)
	{
		A1 = a1;
		A2 = a3;
		A3 = a2;
	}
	else if (a2 <= a1 && a1 <= a3)
	{
		A1 = a2;
		A2 = a1;
		A3 = a3;
	}
	else if (a2 <= a3 && a3 <= a1)
	{
		A1 = a2;
		A2 = a3;
		A3 = a1;
	}
	else if (a3 <= a1 && a1 <= a2)
	{
		A1 = a3;
		A2 = a1;
		A3 = a2;
	}
	else if (a3 <= a2 && a2 <= a1)
	{
		A1 = a3;
		A2 = a2;
		A3 = a1;
	}
	else
	{

	}
	//std::cout << "Sides: " << A1 << " " << A2 << " " << A3 << std::endl;
}

void Triangle::print()
{
	std::cout << "Triangle: ";
	A.print();
	B.print();
	C.print();
}

bool Triangle::if2SidesEqual()
{
	return (A1 == A2 || A2 == A3 || A3 == A1);
}

bool Triangle::if3SidesEqual()
{
	return (A1 == A2 && A2 == A3 && A3 == A1);
}

bool Triangle::if90()
{
	return ((A1 * A1 + A2 * A2) == A3 * A3);
}

bool Triangle::ifLess90()
{
	return ((A1 * A1 + A2 * A2) > A3 * A3);
}

bool Triangle::ifGreater90()
{
	return ((A1 * A1 + A2 * A2) < A3 * A3);
}

double Triangle::getPerimeter()
{
	double perimeter = A1 + A2 + A3;
	return perimeter;
}

double Triangle::area()
{
	double p = (A1 + A2 + A3) / 2;
	return sqrt(p * (p - A1) * (p - A2) * (p - A3));
}

Point Triangle::medicenter()
{
	Point M((A.getX() + B.getX() + C.getX() / 3),
		(A.getY() + B.getY() + C.getY() / 3),
		(A.getZ() + B.getZ() + C.getZ() / 3));
	return M;
}

bool Triangle::checkPlain(Point a)
{
	double AN, BN, CN;

	// Normal vector parameters
	AN = (B.getY() - A.getY()) * (C.getZ() - A.getZ()) -
		(C.getY() - A.getY()) * (B.getZ() - A.getZ());
	BN = (B.getZ() - A.getZ()) * (C.getX() - A.getX()) -
		(C.getZ() - A.getZ()) * (B.getX() - A.getX());
	CN = (B.getX() - A.getX()) * (C.getY() - A.getY()) -
		(C.getX() - A.getX()) * (B.getY() - A.getY());

	if (compareDouble(AN * (a.getX() - A.getX()) + BN * (a.getY() - A.getY()) + CN * (a.getZ() - A.getZ()), 0.0) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

unsigned char Triangle::positioned(Point a)
{
	if (!checkPlain(a))
	{
		return 0;
	}

	Triangle t1(A, B, a), t2(B, C, a), t3(C, A, a);

	//printf("Lica %f %f %f  %f\n", t1.area(), t2.area(), t3.area(), t.area());

	if (compareDouble(t1.area() + t2.area() + t3.area(), area()) == 0)
	{
		if (compareDouble(t1.area(), 0.0) == 1 &&
			compareDouble(t2.area(), 0.0) == 1 &&
			compareDouble(t3.area(), 0.0) == 1)
			return 3;
		else
			return 2;
	}
	else
		return 1;
}

bool operator < (Point a, Triangle t)
{
	if (t.positioned(a) == 3)
		return true;
	else
		return false;
}

bool operator > (Point a, Triangle t)
{
	if (t.positioned(a) == 1)
		return true;
	else
		return false;
}

bool operator ==(Point a, Triangle t)
{
	if (t.positioned(a) == 2)
		return true;
	else
		return false;
}