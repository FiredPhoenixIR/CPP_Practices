//#include <iostream>
//
//struct T {
//};
//
//void f(T&) {
//    std::cout << "lvalue ref\n";
//}  // #1
////void f(const T&) { std::cout << "const lvalue ref\n"; }  // #2
// //void f(T&&) { std::cout << "rvalue ref\n"; } // #3
//// void f(const T&&) { std::cout << "const rvalue ref\n"; } // #4
//
//
//int main() {
//    f(T{}); // rvalue #3, #4, #2
//}