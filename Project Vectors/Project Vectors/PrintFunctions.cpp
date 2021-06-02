#include "PrintFunctions.h"
void PrintGeometricOperations()
{
	cout << "1.Choose geometric object: " << endl;
	cout << "1 - Point" << endl;
	cout << "2 - Vector" << endl;
	cout << "3 - Line" << endl;
	cout << "4 - Segment" << endl;
	cout << "5 - Triangle" << endl;
}
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