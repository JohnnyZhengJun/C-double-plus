#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
int main()
{
	double BMI = 0;
	double Weight = 0;
	double Height = 0;
	int disBMI[11] = {};
	int BMILevelIndex, MaxCount, HeadCount = 0;
	string BMILevel = "";
	
		while (cin >> Weight >> Height)
		{
			if (Weight > 0 && Height > 0)
		{ // Invalid Weight or Height then skip the data set.
				if ((Weight >= 20 && Weight <= 200) && (Height >= 0.9 && Height <= 2.5))
				{
					BMI = Weight / pow(Height, 2);// Calculating BMI.
			// Determining BMI level if both W & H are valid.
					if (BMI < 10) {
						BMILevelIndex = 0;
						BMILevel = "USL";
					}
					else if (BMI >= 10 && BMI <= 15) {
						BMILevelIndex = 1;
						BMILevel = "HSUW";
					} 
					else if (BMI > 15 && BMI <= 16) {
						BMILevelIndex = 2;
						BMILevel = "SUW";
					}
					else if (BMI > 16 && BMI < 18.5) {
						BMILevelIndex = 3;
						BMILevel = "UW";
					}
					else if (BMI >= 18.5 && BMI <= 25) {
						BMILevelIndex = 4;
						BMILevel = "NW";
					}
					else if (BMI > 25 && BMI <= 40) {
						BMILevelIndex = 5;
						BMILevel = "OW";
					}
					else if (BMI > 40 && BMI <= 50) {
						BMILevelIndex = 6;
						BMILevel = "OB";
					}
					else if (BMI > 50 && BMI <= 60) {
						BMILevelIndex = 7;
						BMILevel = "SOB";
					}
					else if (BMI > 60 && BMI <= 70) {
						BMILevelIndex = 8;
						BMILevel = "HSOB";
					}
					else if (BMI > 70) {
						BMILevelIndex = 9;
						BMILevel = "ULL";
					}
				}
			
			// Increasing the count for corresponding BMI level using switch-case
			switch (BMILevelIndex)
			{
			case 0:
				disBMI[0]++;
				break;
			case 1:
				disBMI[1]++;
				break;
			case 2:
				disBMI[2]++;
				break;
			case 3:
				disBMI[3]++;
				break;
			case 4:
				disBMI[4]++;
				break;
			case 5:
				disBMI[5]++;
				break;
			case 6:
				disBMI[6]++;
				break;
			case 7:
				disBMI[7]++;
				break;
			case 8:
				disBMI[8]++;
				break;
			case 9:
				disBMI[9]++;
				break;
			default:
				cout << "Error message!" << endl;
			}
			// Updating MaxCount
			MaxCount = max(disBMI[BMILevelIndex], MaxCount);
			HeadCount++;
		}
		}
	cout << "#" << setw(5) << "USL" << setw(5) << "HSUW" << setw(5) << "SUW" << setw(5) << "UW" << setw(5) << "NW" << setw(5) << "OW" << setw(5) << "OB" << setw(5) << "SOB" << setw(5) << "HSOB" << setw(5) << "ULL\n";
	cout << "#" << setw(5) << disBMI[0] << setw(5) << disBMI[1] << setw(5) << disBMI[2] << setw(5) << disBMI[3] << setw(5) << disBMI[4] << setw(5) << disBMI[5] << setw(5) << disBMI[6] << setw(5) << disBMI[7] << setw(5) << disBMI[8] << setw(4) << disBMI[9]<< "\n";
	cout << "# Maximum count : " << MaxCount << endl;
	cout << "# Level= " << BMILevel<< endl;
	cout << "# Head count = " << HeadCount <<endl;
	return 0;
}
