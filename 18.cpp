#include <iostream>
using namespace std;

#define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

inline int max(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int x, y, z;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    int maxNumMacro = MAX(x, y, z);
    int maxNumInline = max(x, y, z);

    cout << "Largest number using macro: " << maxNumMacro << endl;
    cout << "Largest number using inline function: " << maxNumInline << endl;

    return 0;
}
