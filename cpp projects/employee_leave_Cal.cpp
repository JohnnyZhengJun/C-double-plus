// 2 hrs of leave for each week worked + 0.1 of hrs worked.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double numofhrs;
    cout << "Enter number of hours worked (-1 to end): ";
    while(cin >> numofhrs)
    {
        if(numofhrs == -1)
        {
            break;
        }
        else{
            cout << "Accrued leave: " << fixed << setprecision(2) << 2 + (0.1*numofhrs) << " hours\n";
        }
        cout << "Enter number of hours worked (-1 to end): ";
    }
    return 0;
}