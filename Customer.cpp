#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_No;
    int balance = 0;
    int deposit_amount;
    int withdraw_amount;
    static int total_customers;
    static int Bank_balance;

    public:
        void details();
        void deposit();
        void withdraw();
        void show_customers();
        void customer_Balance();
};

int Customer::total_customers = 0;
int Customer::Bank_balance = 0;

void Customer::details()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account no.: ";
    cin >> account_No;
    cout << "Total customers in bank: " << total_customers << endl;
    total_customers++;
}
void Customer::deposit()
{
    deposit_amount = 0;
    cout << "Enter amount to deposit: ";
    cin >> deposit_amount;
    cout << endl << "Amount deposited: " << deposit_amount << endl;
    Bank_balance += deposit_amount;
    cout << "Balance: " << Bank_balance << endl;
}
void Customer::withdraw()
{
    withdraw_amount = 0;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw_amount;
    
    if(withdraw_amount > balance)
        cout << "Insufficient balance..." << endl;
    else{
        Bank_balance -= withdraw_amount;
        cout << "Balance: " << Bank_balance << endl;
    }
    
}
void Customer::show_customers()
{
    cout << "Total customers: " << total_customers << endl;
    cout << "Bank Total Balance: " << Bank_balance << endl;
}
void Customer::customer_Balance()
{
    balance = deposit_amount - withdraw_amount;
    Bank_balance += balance;
    cout << "Balance is: " << balance;
}

int main() {

    Customer c1, c2, c3;
    int customer, customer_balance;
    char action;
    char repeat;

    c1.details();
    c2.details();
    c3.details();

    do {
        cout << "Enter customer number: ";
        cin >> customer;

        switch(customer){
            case 1:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;

                switch(action)
                {
                    case 'd':
                        c1.deposit();
                        c1.show_customers();
                        break;
                    case 'w':
                        c1.withdraw();
                        c1.show_customers();
                        break;
                    case 'b':
                        c1.customer_Balance();
                        c1.show_customers();
                        break;
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            case 2:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;

                switch(action)
                {
                    case 'd':
                        c2.deposit();
                        c2.show_customers();
                        break;
                    case 'w':
                        c2.withdraw();
                        c2.show_customers();
                        break;
                    case 'b':
                        c2.customer_Balance();
                        c2.show_customers();
                        break;
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            case 3:
                cout << "To Deposit press (d)." << endl << "To Withdraw press (w)." << endl << "To check balance press (b)." << endl;
                cin >> action;

                switch(action)
                {
                    case 'd':
                        c3.deposit();
                        c3.show_customers();
                        break;
                    case 'w':
                        c3.withdraw();
                        c3.show_customers();
                        break;
                    case 'b':
                        c3.customer_Balance();
                        c3.show_customers();
                    default:
                        cout << "Action not correct..." << endl;
                        break;
                }
                break;
            }
            cout << "Do you want to continue(Y/N): ";
            cin >> repeat;
    }
    while(repeat == 'Y' || repeat == 'y');


    return 0;
    }