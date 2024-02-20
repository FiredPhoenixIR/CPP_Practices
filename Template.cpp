#include<iostream>
using namespace std;

/*
With function templates, 
the basic idea is to avoid the necessity of specifying an exact type 
for each variable. Instead, 
C++ provides us with the capability of defining functions using placeholder 
types, called template type parameters.


template <class T> // We named our template type T, which is a generic data type.
T sum(T a, T b) {
    return a + b;
}

int main() {
    int x = 7, y = 15;
    cout << sum(x, y) << endl;
}
*/