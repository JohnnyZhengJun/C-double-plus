#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

// Function to simulate a coin flip
int flip() 
{
    return rand() % 2;  // Returns 0 for Tails and 1 for Heads
    /* Any number from 1 to 32767 divided by 2, will give 0 or 1 as remainder. */
}

int main() 
{
    srand(time(0));  // Seed the random number generator

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 100; ++i) 
    {
        int result = flip();
        if (result == 0) 
        {
            cout << "Tails" << endl;
            tailsCount++;
        } 
        else 
        {
            cout << "Heads" << endl;
            headsCount++;
        }
    }

    // Print the results
    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
