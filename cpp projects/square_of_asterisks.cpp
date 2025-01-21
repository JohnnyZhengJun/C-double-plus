#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;

    if (side < 1 || side > 20) 
    {
        cout << "Please enter a side size between 1 and 20." << endl;
        return 1;
    }

    for (int i = 0; i < side; i++) 
    {
        for (int j = 0; j < side; j++) 
        {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) 
            {
                cout << "*";
            } 
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
