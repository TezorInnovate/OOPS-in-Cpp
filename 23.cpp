#include <iostream>
using namespace std;

class Arithmetic {
public:
    float add(float a, float b) {
        return a + b;
    }
    
    float subtract(float a, float b) {
        return a - b;
    }
    
    float multiply(float a, float b) {
        return a * b;
    }
    
    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Division by zero error!" << endl;
            return 0;
        }
    }
};

class BasicOperations : public Arithmetic {
public:
    void performBasicOperations(float a, float b) {
        cout << "Addition: " << add(a, b) << endl;
        cout << "Subtraction: " << subtract(a, b) << endl;
    }
};

class AdvancedOperations {
public:
    void performAdvancedOperations(float a, float b) {
        Arithmetic arith;
        cout << "Multiplication: " << arith.multiply(a, b) << endl;
        cout << "Division: " << arith.divide(a, b) << endl;
    }
};

class Operations : public BasicOperations, public AdvancedOperations {
public:
    void performAllOperations(float a, float b) {
        performBasicOperations(a, b);
        performAdvancedOperations(a, b);
    }
};

class MoreOperations : public Arithmetic {
public:
    void performMoreOperations(float a, float b) {
        cout << "Addition (MoreOperations): " << add(a, b) << endl;
    }
};

class ExtendedOperations : public MoreOperations {
public:
    void performExtendedOperations(float a, float b) {
        cout << "Subtraction (ExtendedOperations): " << subtract(a, b) << endl;
    }
};

class HybridOperations : public BasicOperations, public ExtendedOperations {
public:
    void performHybridOperations(float a, float b) {
        Operations op;
        op.performAllOperations(a, b);
        performExtendedOperations(a, b);
    }
};

int main() {
    float a, b;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    cout << "\nUsing Operations class for all operations:\n";
    Operations op;
    op.performAllOperations(a, b);

    cout << "\nUsing ExtendedOperations class:\n";
    ExtendedOperations extOp;
    extOp.performExtendedOperations(a, b);

    cout << "\nUsing HybridOperations class:\n";
    HybridOperations hybridOp;
    hybridOp.performHybridOperations(a, b);

    return 0;
}
