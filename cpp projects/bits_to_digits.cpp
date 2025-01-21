#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int bits, digits = 0, counter = 0;
    cout<<"Enter the number of bits: ";
    cin>>bits;

    long long int temp = bits;

    while(temp > 0) // inputting 110
    {
        int rem = temp % 10; // 0, 1, 1
        int tmp = rem * pow(2, counter); // 0, 2, 4
        digits = digits + tmp;
        temp /= 10;
        counter++;
    }
    cout<<"The bit " << bits << " is equivalent to "<< digits << " in decimal."<<endl;
    return 0;
}