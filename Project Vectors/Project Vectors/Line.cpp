#include "Line.h"
Line::Line()
{

}
Line::Line(const Point& point, const Vector& vector)
{
	x = point.getX() + slope.getX() * t;
	y = point.getY() + slope.getY() * t;
	z = point.getZ() + slope.getZ() * t;
	slope = vector;
}
Line::Line(const Point& a, const Point& b)
{
	x = a.getX() + slope.getX() * t;
	y = a.getY() + slope.getY() * t;
	z = a.getZ() + slope.getZ() * t;
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
	t = rhs.t;
	return *this;
}
double Line::getT() const
{
	return t;
}
double Line::setT(double tToBe)
{
	t = tToBe;
	return t;
}
Vector Line::getSlope() const
{
	return slope;
}
Vector Line::getNormVect() const
{
	double Nx = 1;
	double Ny = 1;
	double Nz = (-this->getSlope().getX() - this->getSlope().getY()) / this->getSlope().getZ();
	Vector normVect(Nx, Ny, Nz);
	return normVect;
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
	setT((this->getX() - p.getX()) / slope.getX());
	if (this->getT() == ((this->getY() - p.getY()) / slope.getY()) && this->getT() == ((this->getZ() - p.getZ()) / slope.getZ()))
	{
		flag = true;
	}
	setT(1);
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
	if (rhs.operator+(p1))
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