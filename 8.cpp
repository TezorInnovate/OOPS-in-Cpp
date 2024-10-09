#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Exam : public Student {
protected:
    float marks[6];

public:
    void getMarks() {
        cout << "Enter marks for 6 subjects: " << endl;
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks in 6 subjects: " << endl;
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Exam {
private:
    float totalMarks;
    char grade;
    float averagePercentage, percentage;

public:
    void total() {
        totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }
    }

    void assignGrade() {
        if (averagePercentage > 95 && averagePercentage <= 100) {
            grade = 'A+';
        } else if (averagePercentage > 90 && averagePercentage <= 95) {
            grade = 'A';
        } else if (averagePercentage > 80 && averagePercentage <= 90) {
            grade = 'B';
        } else if (averagePercentage > 70 && averagePercentage <= 80) {
            grade = 'C';
        } else if (averagePercentage > 60 && averagePercentage <= 70) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    void calcPercentAvg() {
        cout << "Percentage Marks in each subject: " << endl;
        for (int i = 0; i < 6; i++) {
            percentage = (marks[i] / 100) * 100;
            cout << "Subject " << i + 1 << ": " << percentage << "%" << endl;
        }

        averagePercentage = totalMarks / 6;
        cout << "Average Percentage: " << averagePercentage << "%" << endl;

        assignGrade();
    }

    void displayResult() {
        displayStudentDetails();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
        calcPercentAvg();
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result s1;

    s1.getStudentDetails();
    s1.getMarks();
    s1.total();

    cout << "\n--- Result ---\n";
    s1.displayResult();

    cout << "Program terminated successfully..." << endl;

    return 0;
}
