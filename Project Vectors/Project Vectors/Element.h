#pragma once
class Element
{
public:
	virtual ~Element() = default;
	double getX() const;
	double getY() const;
	double getZ() const;
protected:
	double x;
	double y;
	double z;
};

