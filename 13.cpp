#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(T element) {
        if (top == capacity - 1) {
            cout << "Stack Overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element;
        cout << element << " pushed to stack." << endl;
    }

    T pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return T();
        }
        return arr[top--];
    }

    T peek() {
        if (top == -1) {
            cout << "Stack is empty. Cannot peek." << endl;
            return T();
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }
};

int main() {
    Stack<int> intStack(5);
    int choice;
    int element;

        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Check if Empty\n";
        cout << "5. Get Size\n";
        cout << "6. Exit\n";

    do {
        cout << "Select an operation: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> element;
                intStack.push(element);
                break;
            case 2:
                cout << intStack.pop() << " popped from stack." << endl;
                break;
            case 3:
                cout << "Top element: " << intStack.peek() << endl;
                break;
            case 4:
                if (intStack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;
            case 5:
                cout << "Current stack size: " << intStack.size() << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select again." << endl;
                break;
        }
    } while (choice != 6);

    cout << "Program terminated successflly..." << endl;
    
    return 0;
}
