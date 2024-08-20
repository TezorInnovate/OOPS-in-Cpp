#include<iostream>
using namespace std;

class Circle {
    double radius;

    public:
        void entry();
        float area();
        float circumference();
};

void Circle::entry()
{
    cout << "Enter radius (cm): ";
    cin >> radius;
}
float Circle::area()
{
    return 3.142 * radius * radius;
}
float Circle::circumference()
{
    return 2 * 3.142 * radius;
}

int main()
{
    Circle c;

    c.entry();
    cout << "Area is: " << c.area() << " cm^2" << endl;
    cout << "Circumference is: " << c.circumference() << " cm" << endl;

    return 0;
}