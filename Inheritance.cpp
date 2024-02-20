#include <iostream>
using namespace std;

/*
A derived class inherits all base class methods 
with the following exceptions:

- Constructors, destructors
- Overloaded operators
- The friend functions
*/

/*
class Mother
{
public:
	Mother() {};
	void sayHi() {
		cout << "Hi";
	}
};

class Daughter : public Mother
{
public:
	Daughter() {};
};

int main() {
	Daughter d;
	d.sayHi();
}
*/