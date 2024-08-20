#include<iostream>
using namespace std;

class Person {
    string name;
    int age;
    string country;

    public:
        void setData();
        void getData();
};

void Person::setData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter country: ";
    cin >> country;
}
void Person::getData()
{
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}

int main()
{
    Person p1;
    
    p1.setData();
    p1.getData();

    return 0;
}