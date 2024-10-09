#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    float basicSalary;
    float hra;
    float da;
    float totalSalary;

public:
    Person(const char* n, int a, const char* addr, float basic) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        basicSalary = basic;
        hra = 0.2 * basicSalary;
        da = 0.1 * basicSalary;
        totalSalary = basicSalary + hra + da;
    }

    inline int getAge() const {
        return age;
    }

    inline void displaySalarySlip() const {
        cout << "-------------------------------\n";
        cout << "Salary Slip for " << name << ":\n";
        cout << "Address: " << address << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << hra << endl;
        cout << "DA (10%): " << da << endl;
        cout << "Total Salary: " << totalSalary << endl;
        cout << "-------------------------------\n";
    }

    static inline Person* findYoungest(Person persons[], int size) {
        Person* youngest = &persons[0];
        for (int i = 1; i < size; ++i) {
            if (persons[i].getAge() < youngest->getAge()) {
                youngest = &persons[i];
            }
        }
        return youngest;
    }

    static inline Person* findEldest(Person persons[], int size) {
        Person* eldest = &persons[0];
        for (int i = 1; i < size; ++i) {
            if (persons[i].getAge() > eldest->getAge()) {
                eldest = &persons[i];
            }
        }
        return eldest;
    }
};

int main() {
    Person persons[10] = {
        Person("John Doe", 28, "123 Street A", 30000),
        Person("Jane Smith", 35, "456 Street B", 45000),
        Person("Alice Green", 24, "789 Street C", 25000),
        Person("Bob Brown", 45, "101 Street D", 60000),
        Person("Charlie Blue", 30, "102 Street E", 32000),
        Person("David White", 40, "103 Street F", 50000),
        Person("Emma Black", 50, "104 Street G", 55000),
        Person("Frank Red", 23, "105 Street H", 27000),
        Person("Grace Yellow", 31, "106 Street I", 40000),
        Person("Hannah Purple", 38, "107 Street J", 47000)
    };

    Person* youngest = Person::findYoungest(persons, 10);
    cout << "The youngest person is:\n";
    youngest->displaySalarySlip();

    Person* eldest = Person::findEldest(persons, 10);
    cout << "The eldest person is:\n";
    eldest->displaySalarySlip();

    cout << "\nSalary slips of all persons:\n";
    for (int i = 0; i < 10; ++i) {
        persons[i].displaySalarySlip();
    }

    cout << "Program terminated successfully..." << endl;

    return 0;
}
