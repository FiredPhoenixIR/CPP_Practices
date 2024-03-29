#include <iostream>
using namespace std;
/*
class Base {
public:
    void NonVirtual() {
        cout << "Base NonVirtual called.\n";
    }
    virtual void Virtual() {
        cout << "Base Virtual called.\n";
    }
};
class Derived : public Base {
public:
    void NonVirtual() {
        cout << "Derived NonVirtual called.\n";
    }
    void Virtual() {
        cout << "Derived Virtual called.\n";
    }
};

int main() {
    Base* bBase = new Base();
    Base* bDerived = new Derived();

    bBase->NonVirtual();
    bBase->Virtual();
    bDerived->NonVirtual();
    bDerived->Virtual();
}


Derived overrides every method of Base: not just the virtual one, 
but also the non-virtual.

We see that when you have a Base-pointer-to-Derived (bDerived), 
calling NonVirtual calls the Base class implementation. 
This is resolved at compile-time: the compiler sees that bDerived is a Base*,
that NonVirtual is not virtual, so it does the resolution on class Base.

However, calling Virtual calls the Derived class implementation. 
Because of the keyword virtual, the selection of the method happens 
at run-time, not compile-time. What happens here at compile-time is that 
the compiler sees that this is a Base*, 
and that it's calling a virtual method, 
so it insert a call to the vtable instead of class Base. 
This vtable is instantiated at run-time, 
hence the run-time resolution to the most-derived override.
*/