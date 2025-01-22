#include<iostream>
#include<vector>
using namespace std;

bool isMultiple3(vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 3 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int size{};
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if(isMultiple3(arr))
    {
        cout << "Yes, the array has a multiple of 3." << endl;
    }
    else
    {
        cout << "No, the array does not have a multiple of 3." << endl;
    }
    return 0;
}