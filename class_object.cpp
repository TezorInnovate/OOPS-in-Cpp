#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        int ID;
        string course;

        void Intro() {
            cout << "Name: " << name << endl;
            cout << "ID: " << ID << endl;
            cout << "Course: " << endl;
        }
};
int main()
{
    Student a1;
    a1.name = "Tezor";
    a1.ID = 61;
    a1.course = "BTech CSE";
    a1.Intro();

    return 0;
}