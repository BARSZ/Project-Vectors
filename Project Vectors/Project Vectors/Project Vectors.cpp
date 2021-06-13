#include <iostream>
#include "PrintFunctions.h"
#include "InputFunctions.h"
#include "EqualPointException.h"
#include "Triangle.h";
#include "Line.h";
using namespace std;

int main()
{
	int geometricObject;
	char chooseObject = 'y';
	char chooseOperation = 'y';
	while (chooseObject == 'y')
	{
		chooseOperation = 'y';
		PrintGeometricOperations();
		cin >> geometricObject;
		//Point
		if (geometricObject == 1)
		{
			while (chooseOperation == 'y')
			{
				int operation;
				Point p = EnterPointFunction();
				PrintPointOperations();
				cin >> operation;
				if (operation == 1)
				{
					p.print();
				}
				else if (operation == 2)
				{
					Point p2 = EnterPointFunction();
					if (p == p2)
					{
						cout << "The points match!" << endl;
					}
					else
					{
						cout << "The points DO NOT match!" << endl;
					}
				}
				else
				{
					cout << "Please enter valid operation!" << endl;
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		//Vector
		else if (geometricObject == 2)
		{
			while (chooseOperation == 'y')
			{
				Vector v1 = EnterVectorFunction();
				PrintVectorOperations();
				int operation;
				cin >> operation;

				if (operation == 1)
				{
					cout << "Vector length is: " << v1.CalculateLenghtVector() << endl;
				}
				else if (operation == 2)
				{
					Vector v2 = v1.CalculateDirection();
					PrintNewVector(v2);
				}
				else if (operation == 3)
				{
					if (v1.IsNullVector())
					{
						cout << "Vector is NULL" << endl;
					}
					else
					{
						cout << "Vector is NOT NULL" << endl;
					}
				}
				else if (operation == 4)
				{
					cout << "Second Vector" << endl;

					Vector v2 = EnterVectorFunction();
					if (v1.AreParallel(v2))
					{
						cout << "They are parallel" << endl;
					}
					else
					{
						cout << "They are NOT parallel" << endl;
					}
				}
				else if (operation == 5)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					if (v1.ArePerpendicular(v2))
					{
						cout << "They are perpendicullar" << endl;
					}
					else
					{
						cout << "They are NOT perpendicullar" << endl;
					}
				}
				else if (operation == 6)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Vector v3 = v1 + v2;

					PrintNewVector(v3);
				}
				else if (operation == 7)
				{
					Vector v2 = EnterVectorFunction();
					Vector v3 = v1 - v2;

					PrintNewVector(v3);
				}
				else if (operation == 8)
				{
					int num;
					cout << "Please enter number for the multiplication: " << endl;
					cout << "Number: ";
					cin >> num;
					Vector v2 = v1 * num;
					PrintNewVector(v2);
				}
				else if (operation == 9)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					double result = v1 * v2;
					cout << "Result: " << result << endl;
				}
				else if (operation == 10)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Vector v3 = v1 ^ v2;
					PrintNewVector(v3);
				}
				else if (operation == 11)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					cout << "Third Vector" << endl;
					Vector v3 = EnterVectorFunction();
					Vector v4 = v1(v2, v3);
					PrintNewVector(v4);
				}
				else
				{
					cout << "Please enter valid operation number";
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		//Line
		else if (geometricObject == 3)
		{
			while (chooseOperation == 'y')
			{
				int operation;
				Point p = EnterPointFunction();
				Vector v = EnterVectorFunction();
				Line l(p, v);

				PrintLineOperations();
				cin >> operation;
				if (operation == 1)
				{
					Vector v2 = l.getSlope();
					cout << "PARALLEL VECTOR" << endl;
					PrintNewVector(v2);
				}
				else if (operation == 2)
				{
					Vector v2 = l.getNormVect();
					cout << "NORMAL VECTOR" << endl;
					PrintNewVector(v2);
				}
				else if (operation == 3)
				{
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					cout << "Second Point" << endl;
					Point p2 = EnterPointFunction();

					Line l2(p2, v2);
					cout << "Angle between these two lines is: " << l.getAngle(l2) << endl;
				}
				else if (operation == 4)
				{
					cout << "Please enter Point to check if it's on the Line" << endl;
					Point p2 = EnterPointFunction();
					if (l + p2)
					{
						cout << "The Point is on the Line!" << endl;
					}
					else
					{
						cout << "The Point is NOT on the Line!" << endl;
					}
				}
				else if (operation == 5)
				{
					cout << "Please enter Point for second Line" << endl;
					Point p2 = EnterPointFunction();
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Line l2(p2, v2);
					if (l || l2)
					{
						cout << "Lines ARE Parallel!" << endl;
					}
					else
					{
						cout << "Lines are NOT Parallel!" << endl;
					}
				}
				else if (operation == 6)
				{
					cout << "Please enter Point for second Line" << endl;
					Point p2 = EnterPointFunction();
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Line l2(p2, v2);
					if (l == l2)
					{
						cout << "Lines coincide!" << endl;
					}
					else
					{
						cout << "Lines do not coincide!" << endl;
					}
				}
				else if (operation == 7)
				{
					cout << "Please enter Point for second Line" << endl;
					Point p2 = EnterPointFunction();
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Line l2(p2, v2);
					if (l && l2)
					{
						cout << "The lines intercept!" << endl;
					}
					else
					{
						cout << "The lines DON'T intercept!" << endl;
					}
				}
				else if (operation == 8)
				{
					cout << "Please enter Point for second Line" << endl;
					Point p2 = EnterPointFunction();
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Line l2(p2, v2);
					if (l != l2)
					{
						cout << "The lines ARE skew!" << endl;
					}
					else
					{
						cout << "The lines AREN'T skew!" << endl;
					}
				}
				else if (operation == 9)
				{
					cout << "Please enter Point for second Line" << endl;
					Point p2 = EnterPointFunction();
					cout << "Second Vector" << endl;
					Vector v2 = EnterVectorFunction();
					Line l2(p2, v2);
					if (l | l2)
					{
						cout << "Lines ARE perpendicullar!" << endl;
					}
					else
					{
						cout << "Lines AREN'T perpendicullar!" << endl;
					}
				}
				else
				{
					cout << "Enter a valid operation number!" << endl;
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		//Segment
		else if (geometricObject == 4)
		{
			while (chooseOperation == 'y')
			{
				int operation;
				PrintSegmentOperations();
				cin >> operation;
				Segment s = EnterSegmentFunction();
				if (operation == 1)
				{
					cout << "Segment length is: " << s.getLength() << endl;
				}
				else if (operation == 2)
				{
					Point middlePoint = s.getMidPoint();
					cout << "Middle Point is: " << endl;
					middlePoint.print();
				}
				else if (operation == 3)
				{
					cout << "Enter Point to check if it's on the Segment" << endl;
					Point p = EnterPointFunction();
					if (s == p)
					{
						cout << "The Point is on the Segment" << endl;
					}
					else
					{
						cout << "The Point is NOT on the Segment" << endl;
					}
				}
				else
				{
					cout << "Invalid operation number!" << endl;
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		//Triangle
		else if (geometricObject == 5)
		{
			while (chooseOperation == 'y')
			{
				int operation;
				cout << "First Point" << endl;
				Point p1 = EnterPointFunction();
				cout << "Second Point" << endl;
				Point p2 = EnterPointFunction();
				cout << "Third Point" << endl;
				Point p3 = EnterPointFunction();
				Triangle tr(p1, p2, p3);
				PrintTriangleOperations();
				cin >> operation;

				if (operation == 1)
				{
					if (tr.if2SidesEqual())
					{
						cout << "Triangle has 2 equal sides" << endl;
					}
					else if (tr.if3SidesEqual())
					{
						cout << "Triangle has 3 equal sides" << endl;
					}
					else if (tr.if90())
					{
						cout << "Triangle is pravougulen" << endl;
					}
					else if (tr.ifLess90())
					{
						cout << "Triangle is ostrougulen" << endl;
					}
					else if (tr.ifGreater90())
					{
						cout << "Triangle is tupougulen" << endl;
					}
					else
					{
						cout << "Triangle is not from this Earth" << endl;
					}
				}
				else if (operation == 2)
				{
					cout << "Area of triangle is: " << tr.area() << endl;
				}
				else if (operation == 3)
				{
					cout << "Perimeter of triangle is: " << tr.getPerimeter() << endl;
				}
				else if (operation == 4)
				{
					Point pFromMedi = tr.medicenter();
					cout << "Result is Point: " << endl;
					cout << "X: " << pFromMedi.getX() << endl;
					cout << "Y: " << pFromMedi.getX() << endl;
					cout << "Z: " << pFromMedi.getX() << endl;
				}
				else if (operation == 5)
				{
					Point p4 = EnterPointFunction();
					if ((p4 < tr))
					{
						cout << "Point is inside of the Triangle and in the same Plane" << endl;
					}
					else
					{
						cout << "Point is NOT inside of the Triangle and in the same Plane" << endl;
					}
				}
				else if (operation == 6)
				{
					Point p4 = EnterPointFunction();
					if ((p4 > tr))
					{
						cout << "Point is outside of the Triangle but in the same Plane" << endl;
					}
					else
					{
						cout << "Point is NOT inside of the Triangle and NOT in the same Plane" << endl;
					}
				}
				else if (operation == 7)
				{
					Point p4 = EnterPointFunction();
					if ((p4 == tr))
					{
						cout << "Point is positioned on one of the sides of the Triangle" << endl;
					}
					else
					{
						cout << "Point is NOT positioned on one of the sides of the Triangle" << endl;
					}
				}
				else
				{
					cout << "Please enter valid operation!" << endl;
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		else
		{
			cout << "Please enter valid geometric number!";
		}
		cout << "Do you want to enter another geometric object (y/n)? " << endl;
		cin >> chooseObject;
	}
	return 0;
}