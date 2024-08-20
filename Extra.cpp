#include<iostream>
using namespace std;

struct Student
{
    string name;
    int enroll_no;
    string department;
    bool smart;
    string performance;

    void get_data()
    {
        cout << "Enter name: ";
        cin  >> name;
        cout << "Enrollment number: ";
        cin >> enroll_no;
        cout << "Department: ";
        cin >> department;
        cout << "Is student smart: ";
        cin >> smart;
        cout << "Rate the students performance: ";
        cin >> performance;
    }
    void show_data()
    {
        cout << "Name: " << name << endl;
        cout << "Enrollment number: " << enroll_no << endl;
        cout << "Department: " << department << endl;
        cout << "Smart: " << smart << endl;
        cout << "Performance: " << performance << endl;
    }
};

union Employee
{
    char name[50];
    int emp_id;
    char job[50];
    double salary;
};

int main()
{
    Student s;
    Employee e;

    s.get_data();
    cout << endl;
    s.show_data();

    cout << endl << "Enter name: ";
    cin >> e.name;
    cout << "Enter ID: ";
    cin >> e.emp_id;
    cout << "Enter job title: ";
    cin >> e.job;
    cout << "Enter salary expectations: ";
    cin >> e.salary;

    cout << endl << "Name: " << e.name << endl;
    cout << "ID: " << e.emp_id << endl;
    cout << "Job title: " << e.job << endl;
    cout << "Salary expectations: " << e.salary << endl;

    cout << endl << "Size of structure: " << sizeof(s) << endl;
    cout << "Size of unoin: " << sizeof(e) << endl;

    cout << "Name: " << (void*)&s.name << endl;
    cout << "Enrollment number: " << (void*)&s.enroll_no << endl;
    cout << "Department: " << (void*)&s.department << endl;

    cout << endl << "Name: " << (void*)&e.name << endl;
    cout << "ID: " << (void*)&e.emp_id << endl;
    cout << "Job: " << (void*)&e.job << endl;

    return 0;
}