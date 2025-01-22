#include<iostream>
using namespace std;
int qualityPts(int grade)
{
    if(grade >= 90 && grade <= 100)
    {
        return 4;
    }
    else if(grade >= 80 && grade <= 89)
    {
        return 3;
    }
    else if(grade >= 70 && grade <= 79)
    {
        return 2;
    }
    else if(grade >= 60 && grade <= 69)
    {
        return 1;
    }
    else if(grade >= 0 && grade <= 59)
    {
        return 0;
    }
    else
    {
        cout << "Invalid grade" << endl;
    }
}
int main()
{
    int grade;
    cout << "Enter the grade: ";
    cin >> grade;

    cout << "The quality points for the grade " << grade << " is " << qualityPts(grade) << endl;
    return 0;
}