#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void writeToFile(const string& filename) {
    ofstream outFile(filename, ios::binary);

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    Student student;
    char choice;

    do {
        cout << "Enter student name: ";
        cin >> student.name;
        cout << "Enter roll number: ";
        cin >> student.rollNumber;
        cout << "Enter marks: ";
        cin >> student.marks;

        outFile.write(reinterpret_cast<char*>(&student), sizeof(student));

        cout << "Do you want to add another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outFile.close();
    cout << "Student details saved to file." << endl;
}

void readFromFile(const string& filename) {
    ifstream inFile(filename, ios::binary);

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    Student student;

    cout << "\nStudent Details:\n";
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))) {
        cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
    }

    inFile.close();
}

int main() {
    string filename = "students.dat";

    writeToFile(filename);
    readFromFile(filename);

    return 0;
}