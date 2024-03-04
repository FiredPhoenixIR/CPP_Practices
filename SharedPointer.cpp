#include <memory>
#include <iostream>
/*
class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructor called\n";
    }
    ~MyClass() {
        std::cout << "MyClass destructor called\n";
    }
    void foo() {
        std::cout << "foo called\n";
    }
};

int main() {
    std::shared_ptr<MyClass> ptr1(new MyClass());
    std::shared_ptr<MyClass> ptr2 = ptr1;
    std::cout << "Reference count: " << ptr1.use_count() << std::endl;   
    // Output: "Reference count: 2"
    ptr1->foo();   // Output: "foo called"
    ptr2.reset();
    std::cout << "Reference count: " << ptr1.use_count() << std::endl;   
    // Output: "Reference count: 1"
    return 0;
}
*/