#include <iostream>
#include "Vector.h";
using namespace std;
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
                int x;
                int y;
                int z;
                int operation;
                cout << "X: ";
                cin >> x;

                cout << "Y: ";
                cin >> y;

                cout << "Z: ";
                cin >> z;
                Vector v1(x, y, z);
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
                cout << "10 - a vector by a number" << endl;
                cout << "11 - Multiply three vectors" << endl;
                cin >> operation;

                if (operation == 1)
                {
                    cout << v1.CalculateLenghtVector() << endl;
                }
                else if (operation == 2)
                {
                    Vector v2 = v1.CalculateDirection();
                    cout << "New vector" << endl;
                    cout << "X: " << v2.getX() << endl;
                    cout << "Y: " << v2.getY() << endl;
                    cout << "Z: " << v2.getZ() << endl;
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
                    cout << "Please enter second vector: ";
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

                    cout << "New vector" << endl;
                    cout << "X: " << v3.getX() << endl;
                    cout << "Y: " << v3.getY() << endl;
                    cout << "Z: " << v3.getZ() << endl;
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

                    cout << "New vector" << endl;
                    cout << "X: " << v3.getX() << endl;
                    cout << "Y: " << v3.getY() << endl;
                    cout << "Z: " << v3.getZ() << endl;
                }
                else if (operation == 8)
                {
                    int num;
                    cout << "Please enter number for the multiplication: " << endl;
                    cout << "Number: ";
                    cin >> num;
                    Vector v2 = v1 * num;
                    cout << "New vector" << endl;
                    cout << "X: " << v2.getX() << endl;
                    cout << "Y: " << v2.getY() << endl;
                    cout << "Z: " << v2.getZ() << endl;
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
                    Vector v3 = v1 * v2;
                    cout << "New vector" << endl;
                    cout << "X: " << v3.getX() << endl;
                    cout << "Y: " << v3.getY() << endl;
                    cout << "Z: " << v3.getZ() << endl;
                }
                else if (operation == 10)
                {

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
                    cout << "New vector" << endl;
                    cout << "X: " << v4.getX() << endl;
                    cout << "Y: " << v4.getY() << endl;
                    cout << "Z: " << v4.getZ() << endl;
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