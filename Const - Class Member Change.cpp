////#include <utility>
//#include <iostream>
//
//// let’s avoid declaring member variables as const. (redflag)
//
///*
//“Depending on the type of the object, 
//a write operation through the pointer, lvalue, or a pointer to data member 
//resulting from a const_cast that casts away a const-qualifier may produce undefined behavior.”
//*/
//class MyClassWithConstMember {
//public:
//    explicit MyClassWithConstMember(int a) : m_a(a) {
//    }
//
//    MyClassWithConstMember& operator=(const MyClassWithConstMember& other) {
//        auto* tmp = const_cast<int*>(&m_a);
//        *tmp = other.m_a;
//        std::cout << "copy assignment \n";
//        return *this;
//    }
//
//    int getA() const {
//        return m_a;
//    }
//
//private:
//    const int m_a;
//};
//
//int main() {
//    MyClassWithConstMember o1{ 666 };
//    MyClassWithConstMember o2{ 42 };
//    std::cout << "o1.a: " << o1.getA() << std::endl;
//    std::cout << "o2.a: " << o2.getA() << std::endl;
//    o1 = o2;
//    o1 = std::move(o2);
///*
//the move request will fall back to a copy request instead.
//Move semantics can be rather dangerous. 
//We may think that we have successfully executed a move operation. 
//But, in fact, we have just used the old copy assignment. 
//Also, we have risked undefined behavior by using const_cast.
//*/
//    std::cout << "o1.a: " << o1.getA() << std::endl;
//}