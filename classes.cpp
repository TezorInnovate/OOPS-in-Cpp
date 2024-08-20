#include<iostream>
using namespace std;

class Student 
{
    public:
    string name;
    string subject;
    int rollNo;
    bool gender;
};

class Fruit
{
    public:
    string name;
    string color;
    double price;
};

int main()
{
    Student s1, s2;
    Fruit f1;

    s1.name = "Student 1";
    s1.subject = "C++ Programming";
    s1.rollNo = 61;
    s1.gender = "Male";

    //cout << s1.name << endl << s1.subject << endl << s1.rollNo << endl << s1.gender << endl;

    cout << "Enter name: ";
    cin >> f1.name;
    cout << "Enter color: ";
    cin >> f1.color;
    cout << "Enter price: ";
    cin >> f1.price;

    cout << "\nFruit name: " << f1.name << endl <<
    "Fruit color: " << f1.color << endl <<
    "Fruit price: " << f1.price << endl;


}