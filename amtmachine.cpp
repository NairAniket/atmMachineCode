#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    int account_number;
    char type[10];
    int amount = 0;
    int total_balance = 0;

public:
    void setValue()
    {
        cout << "Enter your name\n";
        cin.ignore();

        getline(cin, name);

        cout << "Enter your account number\n";
        cin >> account_number;
        cout << "Enter the account type\n";
        cin >> type;
        cout << "Enter balance\n";
        cin >> total_balance;
    }

    void showData()
    {
        cout << "Name : " << name << endl;
        cout << "Account Number : " << account_number << endl;
        cout << "Account Type : " << type << endl;
        cout << "Balance : " << total_balance << endl;
    }

    void deposit()
    {
        cout << "\nEnter the amount to be deposited\n";
        cin >> amount;
    }

    void showBalance()
    {
        total_balance = total_balance + amount;
        cout << "\nTotal Balance is : \n"
             << total_balance;
    }

    void withdrawal()
    {
        int a, available_balance;
        cout << "\nEnter the amount you want to withdraw: \n";
        cin >> a;
        available_balance = total_balance - a;
        cout << "\nAvailable Balance is : \n" << available_balance;
    }
};

int main()
{
    Bank b;
    int choice;

    while (1)
    {
        cout << "\t***********MENU************************\n";
        cout << "\tEnter your choice\n";
        cout << "\t1. Enter your name, account number, account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Total Balance in your account\n";
        cout << "\t5. Withdrawal Money\n";
        cout << "\t6. Cancel\n";
        cout << "\t*****************************************\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.setValue();
            break;

        case 2:
            b.showData();
            break;

        case 3:
            b.deposit();
            break;

        case 4:
            b.showBalance();
            break;

        case 5:
            b.withdrawal();
            break;

        case 6:
            exit(1);
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}
