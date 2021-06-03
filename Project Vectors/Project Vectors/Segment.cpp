#include "Segment.h"
Segment::Segment(const Point& start, const Point& end)
{
	Line line(s, e);
	s = start;
	e = end;
	beg = (s.getX() - ((line.getX() - line.getSlope().getX() * line.getT())) / line.getSlope().getX());
	fin = (e.getX() - ((line.getX() - line.getSlope().getX() * line.getT())) / line.getSlope().getX());
}
Segment::~Segment()
{

}
Segment& Segment::operator=(const Segment& rhs)
{
	s = rhs.s;
	e = rhs.e;
	beg = rhs.beg;
	fin = rhs.fin;
	return *this;
}
Point Segment::getS() const
{
	return s;
}
Point Segment::getE() const
{
	return e;
}
double Segment::getLength() const
{
	return (Vector(this->getS(), this->getE()).CalculateLenghtVector());
}
Point Segment::getMidPoint() const
{
	return Point((this->getS().getX() + this->getE().getX()) / 2, (this->getS().getY() + this->getE().getY()) / 2, (this->getS().getZ() + this->getE().getZ()) / 2);
}
bool Segment::operator== (const Point& rhs) const
{
	bool flag = false;
	Line line(this->getS(), this->getE());
	Vector segmVect(this->getS(), this->getE());
	Vector rhsVect(this->getS(), rhs);
	if (line.operator+(rhs) && this->getLength() >= rhsVect.CalculateLenghtVector() && segmVect.AreParallel(rhsVect))
	{
		flag = true;
	}
	return flag;
}