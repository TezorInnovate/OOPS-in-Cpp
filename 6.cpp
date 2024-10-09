#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    Complex& operator--() {
        --real;
        --imag;
        return *this;
    }

    Complex operator+(const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(const Complex& c) const {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter the first complex number:\n";
    c1.input();

    cout << "\nEnter the second complex number:\n";
    c2.input();

    cout << "\nComplex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    cout << "\nIncrementing Complex Number 1: ";
    ++c1;
    c1.display();

    cout << "Decrementing Complex Number 2: ";
    --c2;
    c2.display();

    result = c1 + c2;
    cout << "\nSum of Complex Number 1 and 2: ";
    result.display();

    result = c1 - c2;
    cout << "Difference of Complex Number 1 and 2: ";
    result.display();

    cout << "Program terminated successfully..." << endl;

    return 0;
}
