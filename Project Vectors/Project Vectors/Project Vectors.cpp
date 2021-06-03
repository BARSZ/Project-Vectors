#include <iostream>
#include "PrintFunctions.h"
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

		}
		//Vector
		else if (geometricObject == 2)
		{
			while (chooseOperation == 'y')
			{
				cout << "Please enter first vector: " << endl;
				double x;
				double y;
				double z;
				int operation;
				cout << "X: ";
				cin >> x;

				cout << "Y: ";
				cin >> y;

				cout << "Z: ";
				cin >> z;
				Vector v1(x, y, z);
				PrintVectorOperations();
				cin >> operation;

				if (operation == 1)
				{
					cout << v1.CalculateLenghtVector() << endl;
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
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
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
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
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
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					Vector v3 = v1 + v2;

					PrintNewVector(v3);
				}
				else if (operation == 7)
				{
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
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
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					double result = v1 * v2;
					cout << "Result" << result << endl;
				}
				else if (operation == 10)
				{
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					Vector v3 = v1 ^ v2;
					PrintNewVector(v3);
				}
				else if (operation == 11)
				{
					cout << "Please enter second vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter third vector: " << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v3(x, y, z);
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
				double x;
				double y;
				double z;
				int operation;

				cout << "Enter Point data for FIRST Line: " << endl;
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;
				cout << "Z: ";
				cin >> z;

				Point p(x, y, z);

				cout << "Enter Vector data for FIRST Line: " << endl;
				cout << "X: ";
				cin >> x;

				cout << "Y: ";
				cin >> y;

				cout << "Z: ";
				cin >> z;
				Vector v(x, y, z);
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
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					cout << "Angle between these two lines is: " << l.getAngle(l2) << endl;
				}
				else if (operation == 4)
				{
					cout << "Please enter Point to check if it's on the Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
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
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					if (l || l2)
					{
						cout << "Lines ARE Parallel!";
					}
					else
					{
						cout << "Lines are NOT Parallel!";
					}
				}
				else if (operation == 6)
				{
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					if (l == l2)
					{
						cout << "Lines match!" << endl;
					}
					else
					{
						cout << "Lines do not match" << endl;
					}
				}
				else if (operation == 7)
				{
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					if (l && l2)
					{
						cout << "Pravite se presichat!" << endl;
					}
					else
					{
						cout << "Pravite ne se presichat!" << endl;
					}
				}
				else if (operation == 8)
				{
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					if (l != l2)
					{
						cout << "Dvete pravi se krustosvat!" << endl;
					}
					else
					{
						cout << "Dvetet pravi ne se krustosvat!" << endl;
					}
				}
				else if (operation == 9)
				{
					cout << "Please enter Vector for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Vector v2(x, y, z);
					cout << "Please enter Point for second Line" << endl;
					cout << "X: ";
					cin >> x;

					cout << "Y: ";
					cin >> y;

					cout << "Z: ";
					cin >> z;
					Point p2(x, y, z);
					Line l2(p2, v2);
					if (l | l2)
					{
						cout << "Lines are perpendicullar!" << endl;
					}
					else
					{
						cout << "Lines are NOT perpendicullar!" << endl;
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

		}
		//Triangle
		else if (geometricObject == 5)
		{
			while (chooseOperation == 'y')
			{
				int x;
				int y;
				int z;
				int operation;

				cout << "Enter first Point: " << endl;
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;
				cout << "Z: ";
				cin >> z;

				Point p1(x, y, z);

				cout << "Enter second Point: " << endl;
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;
				cout << "Z: ";
				cin >> z;

				Point p2(x, y, z);

				cout << "Enter third Point: " << endl;
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;
				cout << "Z: ";
				cin >> z;

				Point p3(x, y, z);
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
					
				}
				else if (operation == 6)
				{

				}
				else if (operation == 7)
				{

				}
				else 
				{
					cout << "Invalid operation number!";
				}
				cout << "Do you want to enter another operation (y/n)? " << endl;
				cin >> chooseOperation;
			}
		}
		else
		{
			cout << "Please enter valid number!";
		}
		cout << "Do you want to enter another geometric object (y/n)? " << endl;
		cin >> chooseObject;
	}
	return 0;
}