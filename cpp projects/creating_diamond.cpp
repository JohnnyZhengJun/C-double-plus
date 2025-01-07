#include<iostream>
using namespace std;
int main()
{
    for(int row = 1; row <= 7; row++)
    {
        for(int space = 1; space <= 7-row; space++)
        {
            cout << " ";
        }
        for(int element = 1; element <= 2*row-1; element++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    for(int row = 6; row >= 1; row--)
    {
        for(int space = 1; space <= 7-row; space++)
        {
            cout << " ";
        }
        for(int element = 1; element <= 2*row-1; element++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}