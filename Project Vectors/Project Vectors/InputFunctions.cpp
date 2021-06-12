#include "InputFunctions.h"
Point EnterPointFunction()
{
	cout << "Enter Point coordinates: " << endl;
	double x;
	double y;
	double z;
	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	cout << "Z: ";
	cin >> z;
	Point p(x, y, z);
	return p;
}
Vector EnterVectorFunction()
{
	cout << "Please enter vector: " << endl;
	double x;
	double y;
	double z;

	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	cout << "Z: ";
	cin >> z;
	Vector v1(x, y, z);
	return v1;
}
Segment EnterSegmentFunction()
{
	double x;
	double y;
	double z;
	cout << "Please enter start Point for Segment: " << endl;
	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	cout << "Z: ";
	cin >> z;
	Point p1(x, y, z);
	cout << "Please enter end Point for Segment: " << endl;
	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	cout << "Z: ";
	cin >> z;
	Point p2(x, y, z);
	Segment s(p1, p2);
	return s;
}