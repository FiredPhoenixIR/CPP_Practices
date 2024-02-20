#include<iostream>
using namespace std;
/*
class Enemy {
public:
	virtual void attack() {
		cout << "Base Class Enemy" << endl;
	}
};

class Ninja : public Enemy {
public:
	void attack() {
		cout << "Ninja!" << endl;
	}
};

class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster!" << endl;
	}
};

int main() {
	Ninja n;
	Monster m;
	Enemy* e1 = &n;
	Enemy* e2 = &m;

	e1->attack();
	e2->attack();
}

/*
A class that declares or inherits a virtual function 
is called a polymorphic class.
As the attack() function is declared virtual, 
it works like a template, 
telling that the derived class might have an attack() function of its own.

*/