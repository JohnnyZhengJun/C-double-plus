/*Calculate and display the mpg */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double miles, gallons{}, total{};
    do{
        double counter{};
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
        cout << "Enter gallons used: ";
        cin >> gallons;
        cout << "MPG this trip: ";
        double mpg = miles / gallons;
        cout << mpg << "\n";
        
        counter++;
        cout << "Total MPG: ";
        total += mpg/counter;
        cout << fixed << setprecision(6) << total << "\n";

    }while(miles != -1);
    


    return 0;
}