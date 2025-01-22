#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int size;
    cout<<"Enter the size of the fibonacci sequence: ";
    cin>>size;
    vector<long long int> fib(size);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<= size - 1;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<"The fibonacci sequence is: ";
    for(int i=0;i<size;i++)
    {
        cout<<fib[i]<<" ";
    }
    return 0;
}