#include<iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

    public:
        void setDetails();
        void validateData();
};
void Date::setDetails()
{
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}
void Date::validateData()
{
    
}