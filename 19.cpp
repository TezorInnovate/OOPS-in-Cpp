#include <iostream>
using namespace std;

class Customer {
    string name;
    int account_No;
    int balance = 0; // Each customer's balance is initialized to 0
    static int total_customers;
    static int Bank_balance;

public:
    void details();
    void deposit();
    void withdraw();
    void show_customers();
    void show_balance();
};

int Customer::total_customers = 0;
int Customer::Bank_balance = 0;

void Customer::details() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account no.: ";
    cin >> account_No;
    total_customers++;
    cout << "Total customers in bank: " << total_customers << endl;
}

void Customer::deposit() {
    int deposit_amount;
    cout << "Enter amount to deposit: ";
    cin >> deposit_amount;
    balance += deposit_amount;  // Update the customer's balance directly
    Bank_balance += deposit_amount;  // Update bank's balance
    cout << "Amount deposited: " << deposit_amount << endl;
    cout << "Current Balance: " << balance << endl;
}

void Customer::withdraw() {
    int withdraw_amount;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw_amount;

    if (withdraw_amount > balance) {
        cout << "Insufficient balance..." << endl;
    } else {
        balance -= withdraw_amount;  // Update the customer's balance directly
        Bank_balance -= withdraw_amount;  // Update bank's balance
        cout << "Amount withdrawn: " << withdraw_amount << endl;
        cout << "Current Balance: " << balance << endl;
    }
}

void Customer::show_customers() {
    cout << "Total customers: " << total_customers << endl;
    cout << "Bank Total Balance: " << Bank_balance << endl;
}

void Customer::show_balance() {
    cout << "Balance is: " << balance << endl;
}

int main() {
    Customer c1, c2, c3;
    char repeat;

    // Get details of customers
    c1.details();
    c2.details();
    c3.details();

    do {
        int customer;
        char action;

        cout << "Enter customer number (1-3): ";
        cin >> customer;

        switch (customer) {
            case 1:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;
                switch (action) {
                    case 'd':
                        c1.deposit();
                        break;
                    case 'w':
                        c1.withdraw();
                        break;
                    case 'b':
                        c1.show_balance();
                        break;
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            case 2:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;
                switch (action) {
                    case 'd':
                        c2.deposit();
                        break;
                    case 'w':
                        c2.withdraw();
                        break;
                    case 'b':
                        c2.show_balance();
                        break;
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            case 3:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;
                switch (action) {
                    case 'd':
                        c3.deposit();
                        break;
                    case 'w':
                        c3.withdraw();
                        break;
                    case 'b':
                        c3.show_balance();
                        break;
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            default:
                cout << "Invalid customer number." << endl;
                break;
        }
        cout << "Do you want to continue (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
