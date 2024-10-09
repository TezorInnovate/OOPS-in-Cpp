#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double AREA(double radius) {
        return M_PI * pow(radius, 2);
    }

    double AREA(double length, double width) {
        return length * width;
    }

    double AREA(double base, double height, bool isTriangle) {
        if (isTriangle)
            return 0.5 * base * height;
        return 0;
    }
};

int main() {
    Shape shape;
    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << shape.AREA(radius) << endl;

    cout << "\nEnter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Area of the rectangle: " << shape.AREA(length, width) << endl;

    cout << "\nEnter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle: " << shape.AREA(base, height, true) << endl;

    cout << "Program terminated successfully..." << endl;

    return 0;
}
