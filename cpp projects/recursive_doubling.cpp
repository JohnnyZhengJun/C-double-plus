#include <iostream>
#include <vector>
using namespace std;

// Function to compute (a^b) % c using modular exponentiation
long long modularExponentiation(long long a, long long b, long long c) {
    long long result = 1;
    a = a % c; // Reduce a modulo c to handle large numbers

    while (b > 0) {
        // If b is odd, multiply result by the current a
        if (b % 2 == 1) {
            result = (result * a) % c;
        }

        // Update b and a
        b = b / 2; // Divide b by 2
        a = (a * a) % c; // Square a and take modulo c
    }
    return result;
}

int main() {
    vector<long long int> results;
    long long a, b, c;

    while (true) {
        cin >> a;
        if (a == -1) break; // Stop processing if input is -1

        cin >> b >> c;
        results.push_back(modularExponentiation(a, b, c));
    }

    for (long long int result : results) 
    {
        cout << result << endl;
    }

    return 0;
}
