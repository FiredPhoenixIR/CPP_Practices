//#include <iostream>
//using namespace std;
//
//// A simple Shape interface which provides a method to get the Shape's area
//class Shape {
//public:
//    virtual float getArea() = 0;// {} without virtual and override it fails
//};
//
//// A Rectangle is a Shape with a specific width and height
//class Rectangle : public Shape {   // derived form Shape class
//private:
//    float width;
//    float height;
//
//public:
//    Rectangle(float wid, float heigh) {
//        width = wid;
//        height = heigh;
//    }
//    float getArea() override {
//        return width * height;
//    }
//};
//
//// A Circle is a Shape with a specific radius
//class Circle : public Shape {
//private:
//    float radius;
//
//public:
//    Circle(float rad) {
//        radius = rad;
//    }
//    float getArea() override {
//        return 3.14159f * radius * radius;
//    }
//};
//
//int main() {
//    Rectangle r(2, 6);    // Creating Rectangle object
//
//    Shape* shape = &r;   // Referencing Shape class to Rectangle object
//
//    cout << "Calling Rectangle getArea function: " << r.getArea() << endl;
//    cout << "Calling Rectangle from shape pointer: " << shape->getArea() << endl << endl;
//    // wrong answer
//
//    Circle c(5);    // Creating Circle object
//
//    shape = &c;   // Referencing Shape class to Circle object
//
//    cout << "Calling Circle getArea function: " << c.getArea() << endl;
//    cout << "Calling Circle from shape pointer: " << shape->getArea() << endl << endl;
//    // wrong answer
//}
//
///*
//
//int main() {
//  Shape * shape[3];   // Referencing Shape class to Rectangle object
//  //Shape * shape1 = new Shape(); //Instantiating the shape object - error
//
//  Rectangle r(2, 6);    // Creating Rectangle object
//  shape[0] = &r;   // Referencing Shape class to Rectangle object
//
//  Circle c(5);    // Creating Circle object
//  shape[1] = &c;   // Referencing Shape class to Circle object
//
//  Square s(10);   // Creating Square object
//  shape[2] = &s;     // Referencing Shape class to Circle object
//
//  for(int i=0; i<3; i++)
//    cout << shape[i]->getArea() << endl;
//}
//*/
//
///*
//Polymorphism only works with a pointer and reference types, 
//so we have created a Shape pointer, 
//and pointed to the derived class objects. 
//But due to multiple existences of the same functions in classes, 
//it will get confused between which class getArea() function it’s calling
//
//Virtual functions ensure that the correct function is called for an object, 
//regardless of the type of reference (or pointer) used for the function call
//*/
//
///*
//Overriding Virtual Function#
//Once you’ve placed a pure virtual function in the base class, 
//you must override it in all the derived classes from which you want to instantiate objects. 
//If a class doesn’t override the pure virtual function, it becomes an abstract class itself, 
//and you can’t instantiate objects from it (although you might from classes derived from it). 
//For consistency, you may want to make all the virtual functions in the base class pure.
//*/