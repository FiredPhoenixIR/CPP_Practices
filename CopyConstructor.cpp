
/*
class MyClass {
public:
    MyClass(int n) : m_value(n) {}
    MyClass(const MyClass& other) : m_value(other.m_value) {}
private:
    int m_value;
};
int main() {
    MyClass obj1(5);
    MyClass obj2 = obj1;  // Copy constructor called
    MyClass obj3(obj1);  // Copy constructor called
    return 0;
}
*/

//Remember: A copy constructor is called in three scenarios in C++ :
//
//    An object is created and immediately initialized with another object of the same type.
//
//    An object is passed as an argument with parameters received as value.
//
//    An object is returned by copy from a function.
// ** the default copy constructor & assignment operator makes a shallow copy.