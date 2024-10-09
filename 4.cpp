#include <iostream>
using namespace std;

class Shape {
private:
    double radius, length, width;

public:
    Shape(double r) : radius(r), length(0), width(0) {
        cout << "Circle object created!" << endl;
    }

    Shape(double l, double w) : radius(0), length(l), width(w) {
        cout << "Rectangle object created!" << endl;
    }

    double circlePerimeter() {
        return 2 * 3.1416 * radius;
    }

    double rectanglePerimeter() {
        return 2 * (length + width);
    }

    ~Shape() {
        cout << "Shape object destroyed!" << endl;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Shape circle(r);
    cout << "Perimeter of the circle: " << circle.circlePerimeter() << endl;

    double l, w;
    cout << "\nEnter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    Shape rectangle(l, w);
    cout << "Perimeter of the rectangle: " << rectangle.rectanglePerimeter() << endl;

    cout << "Program terminated successfully..." << endl;

    return 0;
}
