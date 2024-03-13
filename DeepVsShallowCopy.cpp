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

//Shallow
/*
#include <iostream>

class ShallowCopy {
private:
    int* data;

public:
    // Constructor
    ShallowCopy(int value) {
        data = new int;
        *data = value;
    }

    // Copy constructor (shallow)
    ShallowCopy(const ShallowCopy& other) : data(other.data) {}

    // Destructor
    ~ShallowCopy() {
        delete data;
    }

    // Display function
    void displayData() {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    ShallowCopy obj1(100);
    ShallowCopy obj2(obj1); // Shallow copy

    obj1.displayData(); // Output: Data: 100
    obj2.displayData(); // Output: Data: 100

    // Modifying data in obj1 will also affect obj2 since they share the same memory address
    *obj1.data = 200;

    obj1.displayData(); // Output: Data: 200
    obj2.displayData(); // Output: Data: 200

    return 0;
}
*/

//Deep
/*
#include <iostream>

class DeepCopy {
private:
    int* data;

public:
    // Constructor
    DeepCopy(int value) {
        data = new int;
        *data = value;
    }

    // Copy constructor (deep)
    DeepCopy(const DeepCopy& other) {
        data = new int;
        *data = *other.data;
    }

    // Destructor
    ~DeepCopy() {
        delete data;
    }

    // Display function
    void displayData() {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DeepCopy obj1(100);
    DeepCopy obj2(obj1); // Deep copy

    obj1.displayData(); // Output: Data: 100
    obj2.displayData(); // Output: Data: 100

    // Modifying data in obj1 will not affect obj2 since they have separate memory
    *obj1.data = 200;

    obj1.displayData(); // Output: Data: 200
    obj2.displayData(); // Output: Data: 100

    return 0;
}
*/