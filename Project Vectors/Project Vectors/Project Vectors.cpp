#include <iostream>
using namespace std;
#include "Vector.h";
int main()
{
    std::cout << "Hello World!\n";
    /*Vector v(1, 2, 3);
    cout << v.CalculateLenghtVector();*/
    Vector v(0, 0, 0);
    if (v.IsNullVector())
    {
        cout << "null";
    }
    else
    {
        cout << "Not null";
    }
    return 0;
}