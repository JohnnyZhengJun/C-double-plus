#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
    {
        int temp = n;
        string b = "";
        if(temp == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if(temp == 0)
        {
            cout << 0 << endl;
            continue;
        }
        
        while(temp > 0)
        {
            b += to_string(temp % 2);
            temp /= 2;
        }
        reverse(b.begin(), b.end());
        cout << b << endl;
    }
    return 0;
}

