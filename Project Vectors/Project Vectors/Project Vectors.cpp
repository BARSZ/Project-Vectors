#include <iostream>
#include "Vector.h";
#include "Line.h";
using namespace std;
void PrintVectorOperations()
{
	cout << "Please choose operation: " << endl;
	cout << "1 - Find Vector length" << endl;
	cout << "2 - Find Vector direction" << endl;
	cout << "3 - Null Vector" << endl;
	cout << "4 - Are two vectors parallel?" << endl;
	cout << "5 - Are two vectors perpendicular?" << endl;
	cout << "6 - Add two vectors" << endl;
	cout << "7 - Substract two vectors" << endl;
	cout << "8 - Multiply a vector by a number" << endl;
	cout << "9 - Multiply a vector by a vector" << endl;
	cout << "10 - Vektorno proizvedenie" << endl;
	cout << "11 - Multiply three vectors" << endl;
}
void PrintLineOperations()
{
	cout << "Please choose operation: " << endl;
	cout << "1 - Find Line direction" << endl;
	cout << "2 - Find NORM Vector" << endl;
	cout << "3 - Find angle between two Lines" << endl;
	cout << "4 - Is Point on Line?" << endl;
	cout << "5 - Is this Line parrallel to another Line?" << endl;
	cout << "6 - Two lines match?" << endl;
	cout << "7 - Is this Line going through another Line?" << endl;
	cout << "8 - Dali edna prava e krustosana s druga prava?" << endl;
	cout << "9 - Is this Line perpendicular to another Line?" << endl;
}
void PrintNewVector(Vector v2)
{
	cout << "New vector" << endl;
	cout << "X: " << v2.getX() << endl;
	cout << "Y: " << v2.getY() << endl;
	cout << "Z: " << v2.getZ() << endl;
}
int main()
{
	int geometricObject;
	char chooseObject = 'y';
	char chooseOperation = 'y';
	while (chooseObject == 'y')
	{
		chooseOperation = 'y';
		cout << "1.Choose geometric object: " << endl;
		cout << "1 - Point" << endl;
		cout << "2 - Vector" << endl;
		cout << "3 - Line" << endl;
		cout << "4 - Segment" << endl;
		cout << "5 - Triangle" << endl;
		cin >> geometricObject;

		if (geometricObject == 1)
		{

		}
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
		else if (geometricObject == 3)
		{
			while (chooseOperation == 'y')
			{
				//int initialize;
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
		else if (geometricObject == 4)
		{

		}
		else if (geometricObject == 5)
		{

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