#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
	cout << "Constructor" << endl;
}

std::string MyClass::getName()
{
	cout << "getname" << endl;
}

MyClass::~MyClass()
{
	cout << "Destructor" << endl;
}