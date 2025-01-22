#include<iostream>
#include<vector>
using namespace std;
int reverse_digits(int n) // Normal function
{
    int reversed = 0;
    while(n > 0)
    {
        int rmd = n % 10;
        reversed = reversed * 10 + rmd;
        n /= 10;
    }
    return reversed;
}

// Using vector
// string reverse_digits(vector <int> v) // Function overloading
// {
//     string reversed = "";
//     for(int i = v.size() - 1; i >= 0; i--)
//     {
//         reversed += to_string(v[i]);
//     }
//     return reversed;
// }

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << reverse_digits(n) << endl;

    // int size;
    // cout << "Enter the size of the vector: ";
    // cin >> size;
    // vector<int> v(size);
    // cout << "Enter the elements of the vector: ";
    // for(int i = 0; i < size; i++)
    // {
    //     cin >> v[i];
    // }
    // cout << "Reversed vector: ";
    // cout << reverse_digits(v) << endl;
    return 0;
}