#pragma once
#include <iostream>
#include <exception>
using namespace std;
class EqualPointException : public exception
{
private:
	//char* message;
public:
	EqualPointException();
	virtual ~EqualPointException() = default;
};

