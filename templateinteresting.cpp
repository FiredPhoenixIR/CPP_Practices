#include <iostream>
#include<string>
using namespace std;
/*
1) Template allows code to be written for different data types.
2) A single function can be used for all data types including user defined types.
3) One class can be used for all data types including user defined types.
4) Template is example of compile time polymorphism
* 
//template<class First, class Second, typename Third>

template<class Type>
Type multiply(Type x, Type y)
{
    //return (x * y);
    return static_cast<double>(x) * y;
}

int main() {
    double result = multiply<double>(2.0 , 5.0); //calling template type function
    cout << "Result when integer values are passed is: " << result << endl;
    double result2 = multiply<double>(2.5, 5.5);
    cout << "Result when double values are passed is: " << result2;
    return 0;
}
*/