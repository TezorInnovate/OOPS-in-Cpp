#include <iostream>
using namespace std;

class DivisionException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero.";
    }
};

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw DivisionException();
    }
    return numerator / denominator;
}

int main() {
    double num1, num2;

    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;

    try {
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } catch (const DivisionException& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "An error occurred: " << e.what() << endl;
    }

    cout << "Program terminated successfully..." << endl;

    return 0;
}
