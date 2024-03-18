#include <iostream>
#include "Person.h"
#include "Polygon.h"

using namespace std;

class Rectangle : public Polygon {
public:
    Rectangle() : Polygon() {}
    Rectangle(int width, int height) : Polygon(width, height) {}
    int getArea() override {
        return width * height;
    }
    void draw() override {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
              cout << "*";
            }
            cout << endl;
        }
    }
};

// Triangle class definition
class Triangle : public Polygon {
public:
    Triangle() : Polygon() {}
    Triangle(int width, int height) : Polygon(width, height) {}
    int getArea() override {
        return width * height / 2;
    }
    void draw() override {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j <= i; ++j) {
               cout << "*";
            }
         cout << endl;
        }
    }
};

int main() {
    // Demonstrate Person class
    Person person("John", "Doe", 1, 1, 1990);
    cout << "Person's Name: " << person.getName() << endl;
    cout << "Person's Birthdate: " << person.getBirthdate() << endl << endl;

    Rectangle rectangle(5, 4);
    Triangle triangle(7, 5);

    // Demonstrate Rectangle
    // Question 1: Error: cannot declare variable ‘p’ to be of abstract type Polygon
    cout << "Rectangle Area: " << rectangle.getArea() << endl;
    cout << "Drawing Rectangle:" << endl;
    rectangle.draw();
    cout << endl;
// question 2:  running it results in a linker error because the function was not defined.
    // Demonstrate Triangle
    cout << "Triangle Area: " << triangle.getArea() << endl;
    cout << "Drawing Triangle:" << endl;
    triangle.draw();
    cout << endl;

    // Update dimensions of Rectangle and Triangle
    rectangle.setWidth(6);
    rectangle.setHeight(3);
    triangle.setWidth(8);
    triangle.setHeight(6);

    // Display updated dimensions and areas
    cout << "Updated Rectangle Area: " << rectangle.getArea() << endl;
    cout << "Drawing Updated Rectangle:" << endl;
    rectangle.draw();
    cout << endl;

    cout << "Updated Triangle Area: " << triangle.getArea() << endl;
    cout << "Drawing Updated Triangle:" << endl;
    triangle.draw();

    return 0;
}
