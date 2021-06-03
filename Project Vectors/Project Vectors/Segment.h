#pragma once
#include <iostream>
#include "Line.h"
class Segment : public Line
{
public:
	Segment(const Point&, const Point&);
	virtual ~Segment();
	Segment& operator=(const Segment&);
	Point getS() const;
	Point getE() const;
	double getLength() const;
	Point getMidPoint() const;
	bool operator== (const Point&) const;
private:
	Point s;
	Point e;
	double beg;
	double fin;
};