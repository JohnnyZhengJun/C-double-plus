#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double weight, height, bmi;
    int disBMI[11] = {}, total = 0, max = 0; // total -> head count
    int found;
    while(cin >> weight >> height && weight && height)
    {
        if(weight < 20 || weight > 200 || height < 0.9 || height > 2.5)
        {
            continue;
        }
        else if(weight >= 20 && weight <= 200 && height >= 0.9 && height <= 2.5)
        {
            double BMI = round(weight/(height*height) *10)/10.0;
            if(BMI < 10)
            {
                disBMI[0]++;
                total++;
            }
            else if(BMI >= 10 && BMI <= 15)
            {
                disBMI[1]++;
                total++;
            }
            else if(BMI >= 15 && BMI <= 16)
            {
                disBMI[2]++;
                total++;
            }
            else if(BMI > 16 && BMI < 18.5)
            {
                disBMI[3]++;
                total++;
            }
            else if(BMI >= 18.5 && BMI <= 25)
            {
                disBMI[4]++;
                total++;
            }
            else if(BMI > 25 && BMI <= 40)
            {
                disBMI[5]++;
                total++;
            }
            else if(BMI > 40 && BMI <= 50)
            {
                disBMI[6]++;
                total++;
            }
            else if(BMI > 50 && BMI <= 60)
            {
                disBMI[7]++;
                total++;
            }
            else if(BMI > 60  && BMI <= 70)
            {
                disBMI[8]++;
                total++;
            }
            else if(BMI > 70)
            {
                disBMI[9]++;
                total++;
            }
            else
            {
                cout << "Invalid Input\n";
            }
        }
    }
    cout << "#" << setw(11) << "USL" << setw(11) << "HSUW" << setw(11) << "SUW" << setw(11) << "UW" << setw(11) << "NW" << setw(11) << "OW" << setw(11) << "OB" << setw(11) << "SOB" << setw(11) << "HSOB" << setw(11) << "ULL\n";
    cout << "#" << setw(11) << disBMI[0] << setw(11) << disBMI[1] << setw(11) << disBMI[2] << setw(11) << disBMI[3] << setw(11) << disBMI[4] << setw(11) << disBMI[5] << setw(11) << disBMI[6] << setw(11) << disBMI[7] << setw(11) << disBMI[8] << setw(10) << disBMI[9] << endl;
    
    for(int i = 0; i < 10; i++) // comparing the values of disBMI array to find the maximum value
    {
        if(disBMI[i] > max)
        {
            max = disBMI[i];
            found = i;
        }
    }
    cout << "# Maximum count: " << max << endl;
    cout << "# Level= ";

     for(int i = 0; i < 10; i++) 
     { // outputting all levels with the maximum count
        if(disBMI[i] == max) 
        {
            switch(i) 
            {
                case 0: cout << "USL "; break;
                case 1: cout << "HSUW "; break;
                case 2: cout << "SUW "; break;
                case 3: cout << "UW "; break;
                case 4: cout << "NW "; break;
                case 5: cout << "OW "; break;
                case 6: cout << "OB "; break;
                case 7: cout << "SOB "; break;
                case 8: cout << "HSOB "; break;
                case 9: cout << "ULL "; break;
                default: cout << "Invalid Input "; break;
            }
        }
    }
    cout << "\n # Head count= " << total << endl;
    return 0;
}