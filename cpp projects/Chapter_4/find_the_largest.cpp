#include<iostream>
using namespace std;
int main()
{
    int counter = 0, number, largest;
    cout << "Enter the numbers: ";
    while (counter <= 9)
    {
        cin >> number;
        largest = number;
        if (number > largest)
        {
            largest = number;
        }
        counter++;
    }
    cout << "The most units sold is: " << largest << endl;
}