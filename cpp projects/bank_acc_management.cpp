#include<iostream>
using namespace std;
class bankacc
{
private:
    string accnum="";
    double balance = 20000.0;
public:
    bankacc(string accnum)
    {
        this->accnum = accnum;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully\n" << endl;
    }
    void withdraw(double amount)
    {
        if(balance >= amount)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n" << endl;
        }
        else
        {
            cout << "Insufficient Balance\n" << endl;
        }
    }
    void displayacc()
    {
        cout << "Bank Account Number: " << accnum << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    string bank_pw, bank_acc;

    cout << "Enter Bank Account Number: ";
    cin >> bank_acc;
    cout << "Enter Bank Account Password: ";
    cin >> bank_pw;
    bankacc account(bank_acc);

    char choice;
    do{
        double amount;
        int action{};
        cout << "1. Withdraw\n2. Deposit\n3. Display Account\n4. Exit\nEnter Choice: ";
        cin >> action;
        switch(action)
        {
            case 1:
            {
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 2:
            {
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 3:
            {
                account.displayacc();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout << "Invalid Choice" << endl;
                break;
            }
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    }while(choice == 'y' || choice == 'Y');
    return 0;
}