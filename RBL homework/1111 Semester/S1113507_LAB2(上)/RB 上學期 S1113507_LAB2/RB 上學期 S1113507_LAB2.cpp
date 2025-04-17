#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double weight = 0, height = 0;
    double BMI = 0;
    bool testing = true;
    
    while (testing)
    {
        cout << "Input weight(kg):";
        cin >> weight;
        cout << "Input height(m):";
        cin >> height;
        if (weight < 20 || weight > 200)
        {
            cout << "# Invalid weight(>= 20kg and <= 200kg)\n" << endl; 
        }
    else if (height < 0.9 || height > 2.5)
        {
            cout << "# Invalid height(>= 0.9m and <= 2.5m)\n" << endl;
        }
    else
        {
            BMI = round (weight / pow(height, 2) * 10) / 10.0;  
            cout << "#Your weight(kg): " << weight << endl;
            cout << "#Your height(m): " << height << endl;
            cout << "#Your BMI: "<< BMI << endl;
            cout << "#Your BMI level is ";
            if (BMI < 10)
            {
                cout << "unreasonably small" << endl;
            }
            else if (BMI >= 10 && BMI <= 15)
            {
                cout << "highly severely underweight" << endl;
            }
            else if (BMI > 15 && BMI <= 16)
            {
                cout << "severely underweight" << endl;
            }
            else if (BMI > 16 && BMI < 18.5)
            {
                cout << "underweight" << endl;
            }
            else if (BMI >= 18.5 && BMI <= 25)
            {
                cout << "normal" << endl;
            }
            else if (BMI > 25 && BMI <= 40) 
            {
                cout << "overweight" << endl;
            }
            else if (BMI > 40 && BMI <= 50)
            {
                cout << "obese" << endl;
            }
            else if (BMI > 50 && BMI <= 60)
            {
                cout << "severely obese" << endl;
            }
            else if (BMI > 60 && BMI <= 70)
            {
                cout << "highly severely obese" << endl;
            }
            else if(BMI > 70)
            {
                cout << "unreasonably large" << endl;
            }
            if (BMI < 18 && BMI >= 10)
            {
                cout << "# Increase your weight to " << 18.5 * pow(height, 2) << " kg to bring your BMI value to 18.5(Step 5)\n";
            }
            else if (BMI <= 70 && BMI > 25)
            {
                cout << "# Decrease your weight to " << 25 * pow(height, 2) << " kg to bring your BMI value to 25(Step 5)\n";
            }
            if (BMI < 10)
            { 
                cout << "# Either weight or height must be wrongly given." << endl;
                if (weight >= 20 && weight <= 200 || height >= 0.9 && height <= 2.5)
                {
                    cout << "# If given weight is correct, then the given height should be at most " << sqrt(weight / 10) << " m\n";
                    cout << "# If given height is correct, then the given weight should be at least " << 10 * pow(height, 2) << " kg\n";
                }
            }
            else if (BMI > 70)
            {
                cout << "# Either weight or height must be wrongly given." << endl;
                if (weight >= 20 && weight <= 200 || height >= 0.9 && height <= 2.5)
                {
                    cout << "# If given weight is correct, then the given height should be at most " << sqrt(weight / 70) << "m\n";
                    cout << "# If given height is correct, then the given weight should be at least " << 70 * pow(height, 2) << "kg\n";
                }
            }
        }
    }
    return 0;
}

