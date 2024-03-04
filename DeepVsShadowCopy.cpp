#include<iostream>;
using namespace std;
/*
// Shallow copy :

// Some members of the copy may reference the same objects as the original :

class X
{
private:
    int i;
    int* pi;
public:
    X()
        : pi(new int)
    { }
    X(const X& copy)   // <-- copy ctor
        : i(copy.i), pi(copy.pi)
    { }
};
// Here, the pi member of the original and copied X object 
// will both point to the same int.

//Deep copy :

// All members of the original are cloned(recursively, if necessary).There are no shared objects :

class X
{
private:
    int i;
    int* pi;
public:
    X()
        : pi(new int)
    { }
    X(const X& copy)   // <-- copy ctor
        : i(copy.i), pi(new int(*copy.pi))  // <-- note this line in particular!
    { }
};

// Here, the pi member of the original and copied X object will point to different int objects, 
// but both of these have the same value.

Shallow copies duplicate as little as possible. 
A shallow copy of a collection is a copy of the collection structure, 
not the elements. 
With a shallow copy, two collections now share the individual elements.

Shallow copy is a bit-wise copy of an object. 
A new object is created that has an exact copy of the 
values in the original object. If any of the fields of the object 
are references to other objects, only the reference addresses are copied 
i.e., only the memory address is copied.

Deep copies duplicate everything. 
A deep copy of a collection is two collections with all of the elements 
in the original collection duplicated.

A deep copy copies all fields, 
and makes copies of dynamically allocated memory pointed to by the fields. 
A deep copy occurs when an object is copied along with 
the objects to which it refers
*/

