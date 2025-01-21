#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    double laps, sps_rate, student_contri;
    double total_funds = 0.0;
    cout << "\nEnter laps completed(-1 to end): ";
    while(cin >> laps)
    {

        if(laps == -1)
        {
            cout << "Total funds raised: " << total_funds << "\n";
            break;
        }
        cout << "Enter sponsorship rate: ";
        cin >> sps_rate;
        if(laps >= 40)
        {
            double extra_laps = laps - 40;
            student_contri = (laps * sps_rate) + (extra_laps * sps_rate * 0.5);
        }
        else
        {
            student_contri = laps * sps_rate;
        }
        cout << "Student contribution is: " << fixed << setprecision(2) << student_contri << endl;
        cout << "\nEnter laps completed(-1 to end): ";
        total_funds += student_contri;
    }
    return 0;
}