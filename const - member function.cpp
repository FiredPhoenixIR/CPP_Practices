//#include<iostream>
//
///*
//A const member function can not modify any member variables 
//and cannot call any non-const functions.
//
//const functions can interact with static member variables and functions in a number of ways.
//static functions cannot be const; 
//Non-const functions of non-member variables can be invoked from const functions.
//
//*/
//
//
//class Passenger {
//public:
//    void fun() {
//        // ...
//        std::cout << "I'm from non-const function.";
//
//    }
//};
//
//class Car {
//public:
//    void foo() const {
//        Passenger p;
//        p.fun(); // this non-const call is valid as it's on another object
//    }
//    //...
//};
//
//int main() {
//    Car c;
//    c.foo();
//}
//
//// static functions cannot be declared const as they cannot interact with member variables
//// Therefore, a const function can call static functions without any trouble, 
//// and it can also modify static member variables. 
//// static members can be changed from const functions.