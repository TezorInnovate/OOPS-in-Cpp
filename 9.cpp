#include <iostream>
using namespace std;

class Second;

class First {
private:
    int num1;

public:
    First(int n) : num1(n) {}

    void display() {
        cout << "Number 1: " << num1 << endl;
    }

    friend void swapNumbers(First &f, Second &s);
};

class Second {
private:
    int num2;

public:
    Second(int n) : num2(n) {}

    void display() {
        cout << "Number 2: " << num2 << endl;
    }

    friend void swapNumbers(First &f, Second &s);
};

void swapNumbers(First &f, Second &s) {
    int temp = f.num1;
    f.num1 = s.num2;
    s.num2 = temp;
}

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    First first(a);
    Second second(b);

    cout << "\nBefore swapping:" << endl;
    first.display();
    second.display();

    swapNumbers(first, second);

    cout << "\nAfter swapping:" << endl;
    first.display();
    second.display();

    cout << "Program terminated successfully..." << endl;

    return 0;
}
