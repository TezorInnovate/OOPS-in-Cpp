#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    Student() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class Exam : virtual public Student {
public:
    int marks1, marks2, marks3;

    void inputMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }
};

class Result : virtual public Student {
private:
    int totalMarks;

public:
    void calculateTotalMarks(Exam &exam) {
        totalMarks = exam.marks1 + exam.marks2 + exam.marks3;
    }

    void displayResult() {
        cout << "Total Marks for " << name << " (Roll Number: " << rollNumber << "): " << totalMarks << endl;
    }
};

int main() {
    Exam exam;
    exam.inputMarks();

    Result result;
    result.calculateTotalMarks(exam);
    result.displayResult();

    cout << "Program terminated successfully..." << endl;
    
    return 0;
}
