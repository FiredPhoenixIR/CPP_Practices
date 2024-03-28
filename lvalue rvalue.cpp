//#include <iostream>
//
//int f() {
//    return 13;
//}
//
//int main() {
//    int i = 42; // i is an lvalue
//
//    int& lvri = i;     // lvri is an lvalue reference
//
//    int&& rvrt = f(); // rvrt is rvalue reference to temporary rvalue returned by f()
//
//    int&& rvrl = 1;   // rvalue reference to a literal!
//
//    // int&& rv3 = i;   // ERROR, cannot bind int&& to int lvalue
//    std::cout << i << " " << lvri << " "
//        << rvrt << " " << rvrl << '\n';
//}