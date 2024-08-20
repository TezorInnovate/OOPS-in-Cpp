#include<iostream>
using namespace std;

class Triangle {
    float l1;
    float l2;
    float l3;

    public:
        void setLengths();
        void type();
};
void Triangle::setLengths()
{
    cout << "Enter lenght 1: ";
    cin >> l1;
    cout << "Enter length 2: ";
    cin >> l2;
    cout << "Enter length 3: ";
    cin >> l3;
}
void Triangle::type()
{
    if(l1 == l2 && l2 == l3) {
        cout << "Equilateral triangle.";
    }
    else if(l1 == l2 || l2 == l3 || l3 == l1)
    {
        cout << "Isosceles triangle.";
    }
    else if(l1 != l2 && l2 != l3 && l3 != l1)
    {
        cout << "Scalene triangle.";
    }
}

int main()
{
    Triangle t;

    t.setLengths();
    t.type();

    return 0;
}