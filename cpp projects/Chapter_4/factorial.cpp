#include<iostream>
using namespace std;
int factorial(long long int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    double result = 1;
    for(int i=2;i<=n;i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    long long int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);

    // val of constant e
    double e = 0.0;
    for(int i=0;i<=200;i++)
    {
        e += 1.0/factorial(i);
    }
    cout<<"\nValue of e: "<<e;
    return 0;
}