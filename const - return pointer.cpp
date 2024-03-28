//#include <iostream>
//
//class A {
//public:
//    //const 
//        int* const func() const { // remve first const to test value change ++ *num works
//        int* a = new int{ 42 };
//        return a;
//    }
//};
//
//int main() {
//    A a;
//    auto* num = a.func();
//    std::cout << *num << '\n';
//    ++(*num); // const pointer got ignored when return type is not const
//    std::cout << *num << '\n';
//    num = new int{ 666 };
//    std::cout << *num << '\n';
//}