#include<iostream>
using namespace std;
/*
template <class T>
class MyClass {
public:
	MyClass(T x) {
		cout << x << " -  not a char" << endl;
	}
};

template < > 
// this is because all types are known and no template arguments 
// are required for this specialization, 
// but still, it is the specialization of a class template, 
// and thus it requires to be noted as such.
class MyClass<char> {
public:
	MyClass(char x) {
		cout << x << " is a char!" << endl;
	}
};

// In the example above, the first class is the generic template, 
// while the second is the specialization.

int main() {
	MyClass<int> ob1(42);
	MyClass<double> ob2(5.47);
	MyClass<char> ob3('s');
}

// there is no member "inheritance" from the generic template 
// to the specialization, 
// so all members of the template class specializations must be defined 
// on their own.

*/