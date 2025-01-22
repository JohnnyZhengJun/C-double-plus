#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    int rev=0;
    
    while(n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    {
        cout<<"The number is a palindrome.";
    }
    else
    {
        cout<<"The number is not a palindrome.";
    }
    return 0;
}