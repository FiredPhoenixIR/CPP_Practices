#include <iostream>
#include <string>
/*
class MyString {
public:
    MyString() : m_data("") {}
    MyString(const std::string& data) : m_data(data) {}
    MyString operator+(const MyString& other) const {
        return MyString(m_data + other.m_data);
    }
    friend std::ostream& operator<<(std::ostream& os, const MyString& str);
private:
    std::string m_data;
};


std::ostream& operator<<(std::ostream& os, const MyString& str) {
    os << str.m_data;
    return os;
}


int main() {
    MyString str1("Hello, ");
    MyString str2("world!");
    MyString result = str1 + str2;  // Operator+ called
    std::cout << result << std::endl;  // Operator<< called
    return 0;
}
*/