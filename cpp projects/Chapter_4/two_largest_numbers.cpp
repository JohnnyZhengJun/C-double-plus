#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;// number of elements in the array
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> numbers(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>numbers[i];
    }

    int largest=numbers[0], second_largest=numbers[1];
    if(numbers[0]<numbers[1])
    {
        largest=numbers[1];
        second_largest=numbers[0];
    }

    for(int i=2;i<n;i++)
    {
        if(numbers[i]>largest)
        {
            second_largest=largest;
            largest=numbers[i];
        }
        else if(numbers[i]>second_largest)
        {
            second_largest=numbers[i];
        }
    }
    
    cout<<"The largest number is: "<<largest<<endl;
    cout<<"The second largest number is: "<<second_largest<<endl;

    return 0;
}