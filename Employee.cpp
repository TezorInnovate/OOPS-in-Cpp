#include<iostream>
using namespace std;

class Employee {
    string name;
    int ID;
    float empSalary;
    int performance;
    int newSalary;

    public:
        void details();
        float salary();
};

void Employee::details()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> ID;
    cout << "Enter current salary: ";
    cin >> empSalary;
}
float Employee::salary()
{
    cout << "Bonuses based on Performance: " << "\n"
    "1- Satisfactory - x1.\n2- Good - x1.5.\n3-Excellent - x1.75.\n";
    cout << "Select employee performance: ";
    cin >> performance;
    switch(performance)
    {
        case 1:
            newSalary = empSalary;
            cout << "Employee salary: " << newSalary << endl;
            break;
        case 2:
            newSalary = 1.5 * empSalary;
            cout << "Employee salary: " << newSalary << endl;
            break;
        case 3:
            newSalary = 1.75 * empSalary;
            cout << "Emolpyee salary: " << newSalary << endl;
            break;
        default:
            cout << "Choose correct performance..." << endl;
    }
}

int main()
{
    Employee e1;

    e1.details();
    e1.salary();

    return 0;
}