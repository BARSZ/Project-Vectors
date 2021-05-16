#pragma once
#include "Line.h"
class Segment : public Line
{
public:
	Segment(const Point&, const Point&);
	virtual ~Segment();
	Segment& operator=(const Segment&);
private:
	double t = 1;
	double start;
	double end;
};

