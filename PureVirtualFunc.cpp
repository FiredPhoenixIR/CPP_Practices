#include<iostream>
using namespace std;

/*
The virtual member functions without definition are known as 
pure virtual functions. 
They basically specify that the derived classes 
define that function on their own.

The syntax is to replace their definition 
by =0 (an equal sign and a zero): 

**
You cannot create objects of the base class with a pure virtual function.



class Enemy {
public:
	virtual void attack() = 0;
};

/*
These classes are called abstract. 
They are classes that can only be used as base classes, 
and thus are allowed to have pure virtual functions.
*/