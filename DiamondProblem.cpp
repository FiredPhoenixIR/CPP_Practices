//#include<iostream>
//using namespace std;
//
//class A
//{
//protected:
//    int ID;
//public:
//    A() : ID(0) { }
//};
//
//class B : public A // virtual public A
//{
//public:
//    int length;
//};
//
//class C : public A // virtual public A
//{
//public:
//    int radius;
//};
//
//class D : public B, public C
//{
//public:
//    int getID() { return ID; } // return B::ID; Or return C::ID;
//};
//
//int main(void)
//{
//    D d;
//    cout << d.getID();
//    return 0;
//}
//
////With virtual inheritance, 
//// only one instance of the base class A is inherited into the derived class D.
//
