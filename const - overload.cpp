//#include <iostream>
//
//
//class Car {
//public:
//    void foo() const {
//        std::cout << "void foo() const called\n";
//    }
//
//    void foo() {
//        std::cout << "void foo() called\n";
//    }
//};
//
//int main() {
//    Car car;
//    car.foo();
//    const Car constCar;
//    constCar.foo();
//
//    Car car2;
//    const auto& carRef = car2;
//    carRef.foo();
//
//    static_cast<const Car>(car2).foo();
//
//    Car car3;
//    std::as_const(car3).foo();
//}
//
///*
//it’s considered a best practice to implement operator[] with a const and a non-const overload. 
//The const overload would also return a const reference, 
//while the non-const overload would return a non-const reference.
//*/
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <utility>
//
//
//class StringVectorHolder {
//public:
//    StringVectorHolder(std::vector<std::string> strs) : m_strs(strs) {
//    }
//    std::string& operator[](int position) {
//        return m_strs[position];
//    }
//
//    const std::string& operator[](int position) const {
//        return m_strs[position];
//    }
//
//    std::size_t size() const {
//        return m_strs.size();
//    }
//
//    void print() const {
//        for (size_t i = 0; i < this->size(); ++i) {
//            std::cout << this->operator[](i) << '\n';
//        }
//    }
//private:
//    std::vector<std::string> m_strs;
//};
//
//
//int main() {
//    StringVectorHolder h{ {"one", "two", "three"} };
//    h.print();
//}