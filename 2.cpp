#include <iostream>
using namespace std;

class Test {
public:
    void callByValue(int a) {
        a = a + 10;
        std::cout << "Inside callByValue function, a = " << a << std::endl;
    }

    void callByReference(int& a) {
        a = a + 10;
        std::cout << "Inside callByReference function, a = " << a << std::endl;
    }
};

int main() {
    Test testObj;
    int value1 = 20;
    int value2 = 20;

    cout << "Before callByValue, value1 = " << value1 << endl;
    testObj.callByValue(value1);
    cout << "After callByValue, value1 = " << value1 << endl;

    cout << "\nBefore callByReference, value2 = " << value2 << endl;
    testObj.callByReference(value2);
    cout << "After callByReference, value2 = " << value2 << endl;

    cout << "Program terminated successfully..." << endl;

    return 0;
}
