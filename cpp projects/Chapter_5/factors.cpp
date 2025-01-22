#include<iostream>
using namespace std;

bool isFactor(int n, int m) 
{
    return n % m == 0;
}

int main() 
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) 
    {
        if (isFactor(n, i)) 
        {
            cout << i << " ";
        }
    }
    return 0;
}