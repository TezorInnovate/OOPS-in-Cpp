#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class PalindromeChecker {
public:
    bool num_palindrome(int number) {
        int originalNumber = number;
        int reversedNumber = 0;
        
        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }
        
        return originalNumber == reversedNumber;
    }

    bool str_palindrome(const string& str) {
        int start = 0;
        int end = str.length() - 1;
        
        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
};

int main() {
    PalindromeChecker checker;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checker.num_palindrome(num)) {
        cout << num << " is a palindrome number." << endl;
    } else {
        cout << num << " is not a palindrome number." << endl;
    }

    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (checker.str_palindrome(str)) {
        cout << str << " is a palindrome string." << endl;
    } else {
        cout << str << " is not a palindrome string." << endl;
    }

    return 0;
}
