#include<iostream>
using namespace std;

class Car {
    string company;
    string model;
    int year;

    public:
        void setData();
        void getData();
};

void Car::setData()
{
    cout << "Enter car company: ";
    cin >> company;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter model year: ";
    cin >> year;
}
void Car::getData()
{
    cout << "\nCar company name: " << company << endl;
    cout << "Model: " << model << endl;
    cout << "Model year: " << year << endl;
}

int main()
{
    Car c1;
    
    c1.setData();
    c1.getData();

    return 0;
}