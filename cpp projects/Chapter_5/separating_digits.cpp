#include <iostream>
using namespace std;

// Function to calculate the quotient
int quotient(int a, int b) {
    return a / b;
}

// Function to calculate the remainder
int remainder(int a, int b) {
    return a % b;
}

// Function to print the digits with two spaces between each pair
void printWithSpaces(int number)
{
    if (number > 32767 || number < 1) 
    {
        cout << "Number is out of range (1-32767)." << endl;
        return;
    }

    int temp = number;
    string result = "";

    while (temp > 0) 
    {
        int rem = remainder(temp, 10);
        result = "  " + to_string(rem) + result;
        temp = quotient(temp, 10);
    }

    cout << result.substr(2) << endl;  // Remove leading spaces
}

int main() {
    int number;
    cout << "Enter a number between 1 and 32767: ";
    cin >> number;

    printWithSpaces(number);

    return 0;
}
