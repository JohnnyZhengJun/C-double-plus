/*Write a function integerPower(base, exponent) that returns the value of 
base^exponent
 For example, integerPower(3, 4) =  3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero
 integer and that base is an integer. Do not use any math library functions.*/
#include<iostream>
using namespace std;

int integerPower(int base, unsigned int exponent)
{
    int result = 1;
    for(int i = 0; i <= exponent - 1; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int base;
    unsigned int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "The result is: " << integerPower(base, exponent) << endl;
    return 0;
}