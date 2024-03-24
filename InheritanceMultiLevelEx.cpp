//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    void init() {
//        cout << "Class A initialized!" << endl;
//    }
//    void update() {
//        cout << "Class A updated!" << endl;
//    }
//};
//
//class B : public A {
//public:
//    void update() {
//        cout << "Class B updated!" << endl;
//    }
//};
//
//class C : public B { };
//
//int main() {
//    // your code goes here
//    C c;
//    c.init();
//    c.update();
//    return 0;
//}


//Note that this is all happening at compile time. 
// The function calls init() and update() in main() 
// are bound to appropriate function definitions at compile time.