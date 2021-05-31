#pragma once
#include <iostream>
#include <exception>
using namespace std;
class VectorLengthException : public exception
{
private:
	//char* message;
public:
	virtual ~VectorLengthException() = default;
};

