#include<iostream>
#include<cmath>
using namespace std;

class Calculator {
        float a;
        float b;

    public:

        void result()
        {
            cout << "Enter a value for A: ";
            cin >> a;
            cout << "Enter a value for B: ";
            cin >> b;
        }

        float add() {
            return a + b;
        }
        float subtract() {
            return a - b;
        }
        float multiply() {
            return a * b;
        }
        float divide() {
            if(b == 0) {
                cout << "Division by 0...\n";
                return INFINITY;
            }
            else {
                return a / b;
            }
        }
};

int main()
{
    char contn;
    char symbol;
    Calculator c;

    cout << "********** Simple Calculator **********\n";
    cout << "\nChoose required operation: " << "\n"
    "Enter \'+\' to add a and b." << "\n"
    "Enter \'-\' to subtract a and b." << "\n"
    "Enter \'*\' to multiply a and b." << "\n"
    "Enter \'/\' to divide a and b." << "\n";

    do {
    cout << "\nEnter operator: ";
    cin >> symbol;

    switch(symbol) {
        case '+':
            c.result();
            cout << "Addition is: " << c.add() << endl;
            break;
        case '-':
            c.result();
            cout << "Subtraction is: " << c.subtract() << endl;
            break;
        case '*':
            c.result();
            cout << "Multiplication is: " << c.multiply() << endl;
            break;
        case '/':
            c.result();
            cout << "Division is: " << c.divide() << endl;
            break;
        default:
            cout << "Choose from the given operators...\n" <<
            "INCORRECT OPERATOR!" << endl;
            break;
    }
    cout << "\nDo you want to continue (Y/N): ";
    cin >> contn;
    } while(contn == 'Y' || contn == 'y');


    return 0;
}