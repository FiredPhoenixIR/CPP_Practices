#include<iostream>
using namespace std;
/*
// C++ exception handling is built upon three keywords: 
// try, catch, and throw.
// throw is used to throw an exception when a problem shows up.

int motherAge = 29;
int sonAge = 36;
if (sonAge > motherAge) {
	throw "Wrong age values";
}

// The catch keyword represents a block of code 
// that executes when a particular exception is thrown. 
// Multiple catch statements may be listed to handle various exceptions 
// in case multiple exceptions are thrown by the try block.

try {
	int motherAge = 29;
	int sonAge = 36;
	if (sonAge > motherAge) {
		throw 99;
	}
}
catch (int x) {
	cout << "Wrong age values - Error " << x;
}

int main() {
	try {
		int num1;
		cout << "Enter the first number:";
		cin >> num1;

		int num2;
		cout << "Enter the second number:";
		cin >> num2;

		if (num2 == 0) {
			throw 0;
		}

		cout << "Result:" << num1 / num2;
	}
	catch (...) { 
	// changed int x , handles any type of exception thrown in a try block
		cout << "Division by zero!";
	}
}

*/