#include<iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    int balance;
    int depositAmount;
    int withdrawAmount;

    public:
        void details();
        void deposit();
        void withdraw();
};

void BankAccount::details()
{
    cout << "Name: ";
    cin >> name;
    cout << "Account number: ";
    cin >> accNo;
}
void BankAccount::deposit()
{
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    cout << "Deposited " << depositAmount << "$" << endl;
}
void BankAccount::withdraw()
{
    cout << "Can only withdraw upto 20 000 $" << endl;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    if(withdrawAmount > 20000)
    {
        cout << "Amount is larger than 20,000 $\n" << "Please enter smaller amount...";
    }
    else
    {
        cout << "Withdrawn: " << withdrawAmount << " $" << endl;
    }
}

int main()
{
    BankAccount a1;
    int option;

    a1.details();
    cout << "Choose task to perform: " << "\n"
    "1- Deposit " << "\n" "2- Withdraw" << "\n"
    "Enter task: ";
    cin >> option;

    switch(option)
    {
        case 1:
            a1.deposit();
            break;
        case 2:
            a1.withdraw();
            break;
        default:
        cout << "INCORRECT TASK CHOSEN...";
        break;
    }

    return 0;
}