//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n, sum, temp, rem, counter{};
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        counter++;
        temp = temp / 10;
    }

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, counter);
        temp /= 10;
    }

    cout << (sum == n ? "Armstrong number" : "Not an Armstrong number") << endl;
    /*Ternary operator
    1. variable = (condition) ? value_if_true : value_if_false;
    */
    return 0;
}