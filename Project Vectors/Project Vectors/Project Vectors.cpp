#include <iostream>
using namespace std;
#include "Vector.h";
int main()
{
    std::cout << "Hello World!\n";
    /*Vector v(1, 2, 3);
    cout << v.CalculateLenghtVector();*/
    //NULL VECTOR
    /*Vector v(0, 0, 0);
    if (v.IsNullVector())
    {
        cout << "null";
    }
    else
    {
        cout << "Not null";
    }*/
    /*Vector v(1, 2, 3);
    Vector v2 = v.CalculateDirection();
    cout << v2.CalculateLenghtVector();*/
    /*Vector v1(-9, 18, 0);
    Vector v2(-3, 6, 0);
    if (v1.AreParallel(v2))
    {
        cout << "Male perpoendikulqrni sa tva e mn qko";
    }*/
    /*if (v1.ArePerpendicular(v2))
    {
        cout << "Male perpoendikulqrni sa tva e mn qko";
    }*/
    Vector v1(2, 4, 6);
    Vector v2(1, 2, 3);
    cout << (v1 * v2).CalculateLenghtVector();
    return 0;
}