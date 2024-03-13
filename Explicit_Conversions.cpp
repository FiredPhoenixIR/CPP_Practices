//#include<iostream>
//
///*
//static_cast 
//is used for explicit conversions between related types. 
//It performs conversions that do not require runtime type information (RTTI) 
//or dynamic type checking. It's typically considered safe by the compiler 
//for certain types of conversions
//*/
//
//int x = 10;
//double y = static_cast<double>(x); // Convert int to double
//
//class Base {};
//class Derived : public Base {};
//
//Base* basePtr = new Derived();
//Derived* derivedPtr = static_cast<Derived*>(basePtr); 
//// Downcasting
//// This is allowed in C++ due to polymorphism; 
//// A derived class object can be treated as a base class object
//// static_cast doesn't provide runtime safety checks for the downcast. 
//
//class Base {
//public:
//    virtual void foo() {}
//};
//class Derived : public Base {};
//
//Base* basePtr = new Derived();
//Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Downcasting with dynamic type checking
///*
//dynamic_cast 
//is used for conversions that require runtime type information (RTTI) 
//and perform dynamic type checking.
//It is primarily used for downcasting 
//(converting from a base class pointer/reference to a derived class pointer/reference) safely.
//dynamic_cast returns a null pointer if the conversion is not possible 
//and requires the types involved to be polymorphic (i.e., have at least one virtual function).
//*/
//
//
//int x = 10;
//double* pDouble = reinterpret_cast<double*>(&x); // Reinterpret int pointer as double pointer
//
///*
//reinterpret_cast 
//is used for low-level reinterpretation of bits. // direcly access data/memory/register
//It allows converting any pointer type to any other pointer type, even of unrelated classes.
//It can also be used for converting between pointers and integers 
//or between pointers and pointers to different types.
//reinterpret_cast is inherently unsafe and should be used with caution.
//*/
//
//
//const int x = 10;
//int* pX = const_cast<int*>(&x); // Remove constness
//*pX = 20; // Modifying x through a non-const pointer result an error
//
//void modifyConst(int& ref) {
//    ref = 20; // Modifying the value through the reference
//}
//
//int main() {
//    const int x = 10;
//    int& ref = const_cast<int&>(x); // Removing constness from the reference
//     //Reference initialized to refer to x
//     //References must be initialized upon declaration 
//     //and cannot be reassigned to refer to a different memory location after initialization.
//    modifyConst(ref); // Modifying the value through the reference
//    return 0;
//}