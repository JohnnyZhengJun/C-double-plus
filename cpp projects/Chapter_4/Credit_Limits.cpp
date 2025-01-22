#include<bits/stdc++.h>
using namespace std;
int main()
{
    int accnum;
    cout << "Enter account number (or -1 to quit): ";
    cin >> accnum;
    while(accnum != -1)
    {
        double beginbal, totalcharges, totalcredits, creditlimit{};
        cout << "Enter beginning balance: ";
        cin >> beginbal;
        cout << "Enter total charges: ";
        cin >> totalcharges;
        cout << "Enter total credits: ";
        cin >> totalcredits;
        cout << "Enter credit limit: ";
        cin >> creditlimit;

        double newbalance = beginbal + totalcharges - totalcredits;
        cout << "New balance is " << newbalance << endl;
        if(newbalance > creditlimit)
        {
            cout << "Account:      " << accnum << endl;
            cout << "Credit limit: " << creditlimit << endl;
            cout << "Balance:      " << newbalance << endl;
            cout << "Credit Limit Exceeded.\n" << endl;
        }
        else 
        {
            cout << "New balance is " << newbalance << "\n\n";
        }
    cout << "Enter account number (or -1 to quit): ";
    cin >> accnum;
    }
    return 0;
}