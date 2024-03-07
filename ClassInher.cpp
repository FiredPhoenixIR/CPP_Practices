#include <iostream>
#include<string>
using namespace std;
/*
class Mammal
{
public:
    //Mammal();
    Mammal() : age(0) {} // Default constructor
    Mammal(int a) : age(a) {}
    ~Mammal() {} // Destructor
    void Eat() {
        cout << "Mammal eats food" << endl;
    }
    void Speak() {
        cout << "Mammal speaks mammalian!!" << endl;
    }
    int get_Age() {
        return age;
    }
protected:
    int age;
};


//define the base class "Dog" here
class Dog : public Mammal
{
public:
    // Constructors
    Dog() : Mammal() {}
    Dog(int a) : Mammal(a) {}

    // Destructor
    ~Dog() {}

    void Eat() {
        cout << "Dog eats meat" << endl;
    }
    void Speak() {
        cout << "Dog barks : ruff!ruff!" << endl;
    }

};


//define the base class "Cat" here
class Cat : public Mammal
{
public:
    // Constructors
    Cat() : Mammal() {}
    Cat(int a) : Mammal(a) {}

    // Destructor
    ~Cat() {}

    void Eat() {
        cout << "Cat eats meat" << endl;
    }
    void Speak() {
        cout << "Cat meows : Meow!Meow!" << endl;
    }
};


int main() {
    //make object of Mammal class
    Mammal MamObj;
    //making object of child class Dog
    Dog DogObj(5);
    //making object of child class Cat
    Cat CatObj(4);
    cout << "Calling Dog class functions" << endl;
    //call Eat and Speak functions here for the Dog object
    DogObj.Eat();
    DogObj.Speak();
    cout << "Dog's age is: "; //cout the age by calling the get_Age() function here
    int dogage = DogObj.get_Age();
    cout << dogage << endl;;
    cout << "Calling Cat class functions" << endl;
    //call Eat and Speak functions here for the Cat object
    CatObj.Eat();
    CatObj.Speak();
    cout << "Cat's age is: "; //cout the age by calling the get_Age() function here
    int catage = CatObj.get_Age();
    cout << catage << endl;

    return 0;
}
*/