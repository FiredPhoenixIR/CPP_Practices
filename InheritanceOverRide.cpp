//#include <iostream>
//using namespace std;
//class B {
//public:
//    void greet(int c) {
//        cout << c;
//    }
//    void greet() {
//        cout << "Hello B";
//    }
//};
//class D : public B {
//public:
//    void greet() {
//        cout << "Hello D";
//    }
//};
//
//int main() {
//    D d;
//    d.greet(3);
//    // The program wouldn’t compile
//    //Explanation
//    //Definition of a function in a derived class hides all overloads of the same function 
//    // in the base class
//    return 0;
//}