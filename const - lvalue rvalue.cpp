//#include <iostream>
//
//struct T {
//};
//
//void f(T&) {
//    std::cout << "lvalue ref\n";
//}  // #1
//
//void f(const T&) {
//    std::cout << "const lvalue ref\n";
//}  // #2
//
//void f(T&&) = delete; 
////{
////    std::cout << "rvalue ref\n";
////} // #3
////
////void f(const T&&) {
////    std::cout << "const rvalue ref\n";
////} // #4
//
//// Although it doesn’t make much sense in general to pass const rvalue references
//// So due to the binding rules, 
//// we can only make sure that no rvalue references are accepted by deleting the const T&& overload
//
//const T g() {
//    return T{};
//
//}
//
//int main() {
//    f(g()); // #4, #2 rvalue
//
//    T t;
//    f(t); // #1, #2 - lvalue
//    //f(T{});
//}
//
//// An lvalue overload can accept both lvalues and rvalues, 
//// but an rvalue overload can only take rvalues.
//
//// const values must not be returned by a function because that will make move semantics impossible.
//
//// What is important to note is that f(const T&&) can take both T&& and const T&&, 
//// while f(T&&) can only take the non-const rvalue reference.
//
