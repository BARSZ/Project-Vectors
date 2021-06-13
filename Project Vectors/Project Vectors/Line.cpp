#include "Line.h"
Line::Line()
{

}
Line::Line(const Point& point, const Vector& vector)
{
	x = point.getX() + slope.getX();
	y = point.getY() + slope.getY();
	z = point.getZ() + slope.getZ();
	slope = vector;
}
Line::Line(const Point& a, const Point& b)
{
	x = a.getX() + slope.getX();
	y = a.getY() + slope.getY();
	z = a.getZ() + slope.getZ();
	slope = Vector(a, b);
}

Line::~Line()
{

}
Line& Line::operator=(const Line& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	slope = rhs.slope;
	return *this;
}
Vector Line::getSlope() const
{
	return slope;
}
Vector Line::getNormVect() const
{
	if (getSlope().getZ() != 0)
	{
		double Nx = 1;
		double Ny = 1;
		double Nz = (-this->getSlope().getX() - this->getSlope().getY()) / this->getSlope().getZ();
		Vector normVect(Nx, Ny, Nz);
		return normVect;
	}
	else if (getSlope().getY() != 0)
	{
		double Nx = 1;
		double Ny = (-this->getSlope().getX() - this->getSlope().getZ()) / this->getSlope().getY();
		double Nz = 1;
		Vector normVect(Nx, Ny, Nz);
		return normVect;
	}
	else if (getSlope().getX() != 0)
	{
		double Nx = (-this->getSlope().getY() - this->getSlope().getZ()) / this->getSlope().getX();
		double Ny = 1;
		double Nz = 1;
		Vector normVect(Nx, Ny, Nz);
		return normVect;
	}

}
double Line::getAngle(const Line& rhs) const
{
	double dotProduct = this->getSlope() * rhs.getSlope();
	double lengthA = this->getSlope().CalculateLenghtVector();
	double lengthB = rhs.getSlope().CalculateLenghtVector();
	double angle = acos(dotProduct / (lengthA * lengthB));
	return angle;
}
bool Line::operator+ (const Point& p)
{
	bool flag = false;
	Point p1(this->getX(), this->getY(), this->getZ());
	Vector rhsLine(p1, p);
	if ((this->getSlope() ^ rhsLine) == 0)
	{
		flag = true;
	}
	return flag;
}
bool Line::operator|| (Line& rhs) const
{
	bool flag = false;
	if ((this->getSlope() ^ rhs.getSlope()) == 0)
	{
		flag = true;
	}
	return flag;
}
bool Line::operator== (Line& rhs) const
{
	bool flag = false;
	Point p1(this->getX(), this->getY(), this->getZ());
	if (this->operator||(rhs) && rhs.operator+(p1))
	{
		flag = true;
	}
	return flag;
}
bool Line::operator&&(Line& rhs) const
{
	bool flag = false;
	if (!(this->operator||(rhs)))
	{
		Point p1(this->getX(), this->getY(), this->getZ());
		Point p2(rhs.getX(), rhs.getY(), rhs.getZ());
		Line l1(p1, p2);
		Vector vectProd = (this->getNormVect()) ^ (rhs.getNormVect());
		if (vectProd * l1.getNormVect() == 0)
		{
			flag = true;
		}
	}
	return flag;

}
bool Line::operator!=(Line& rhs) const
{
	bool flag = false;
	if (!(this->operator||(rhs)) && !(this->operator&&(rhs)))
	{
		flag = true;
	}
	return flag;
}
bool Line::operator|(Line& rhs) const
{
	if (this->getSlope() * rhs.getSlope() == 0)
	{
		return true;
	}
	return false;
}