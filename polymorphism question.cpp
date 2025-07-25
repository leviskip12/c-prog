/*
Author:Levis kipruto chumba
REG :BSE-01-0036/2025
Desccription: program to demonstrate polymorhism
Date 19-07/2025*/

#include <iostream>
using namespace std;
//base class
class Shape {
public:
    virtual void area() {
        cout << "Area calculation not defined for generic shape." << endl;
    }
};
//derrived class rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
//constructor to initialize length and width
    Rectangle(double l, double w) {
	 length=l;
	  width=w ;
	  }
    void area() override {
        cout << "Area of Rectangle: " << (length * width) << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
		radius=r;
	}
    void area() override {
        cout << "Area of Circle: " << (3.14159 * radius * radius) << endl;
    }
};

class PolymorphismTest {
public:
    static void run() {
        Shape* shapePtr = nullptr;
        char choice;
        
        cout << "Choose shape (R for Rectangle, C for Circle): ";
        cin >> choice;
        
        if (choice == 'R' || choice == 'r') {
            double length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            shapePtr = new Rectangle(length, width);
        } else if (choice == 'C' || choice == 'c') {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            shapePtr = new Circle(radius);
        } else {
            cout << "Invalid choice!" << endl;
            return;
        }
        
        shapePtr->area();
        delete shapePtr;
    }
};

int main() {
    PolymorphismTest::run();
    return 0;
}