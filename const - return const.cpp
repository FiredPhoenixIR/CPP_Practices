//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//// nothing changed here
//class SgWithMove {
//public:
//    SgWithMove() {
//        std::cout << "default constructor\n";
//    }
//
//    SgWithMove(const SgWithMove& other) {
//        std::cout << "copy constructor\n";
//    }
//
//    SgWithMove(SgWithMove&& other) noexcept {
//        std::cout << "move constructor\n";
//    }
//
//    SgWithMove& operator=(const SgWithMove& other) {
//        std::cout << "copy assignment\n";
//        return *this;
//    }
//
//    SgWithMove& operator=(SgWithMove&& other) noexcept {
//        std::cout << "move assignment\n";
//        return *this;
//    }
//};
//
//// const added to the return type
//const SgWithMove foo() {
//    SgWithMove ret;
//    // ...
//    return ret;
//}
//
//int main() {
//    SgWithMove o;
//    o = foo(); // with const return for foo it will copy , no move
//}

/*

const T& MyObject::getSomethingConstRef() {
   T ret;
   // ...
   return ret; // ret gets destroyed right after thus the returned reference points at ret's ashes
}

// On the other hand, if we return a reference to a member of MyObject, the returned reference is valid.


// As a result, it’s better to never return a local variable by reference or by pointer.


*/