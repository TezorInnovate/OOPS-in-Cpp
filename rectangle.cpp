#include<iostream>
using namespace std;

class Rectangle {
    float length;
    float width;

    public:
        void entry();
        float area();
        float perimeter();
};

void Rectangle::entry()
{
    cout << "Enter length (cm): ";
    cin >> length;
    cout << "Enter width (cm): ";
    cin >> width;
}
float Rectangle::area()
{
    return length * width;
}
float Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    Rectangle r;

    r.entry();
    cout << "Area is: " << r.area() << " cm^2" << endl;
    cout << "Perimeter is: " << r.perimeter() << " cm" << endl;

    return 0;
}