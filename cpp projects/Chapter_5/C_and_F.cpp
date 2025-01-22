#include<iostream>
using namespace std;
double celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
double fahrenheit(double celsius)
{
    return celsius * 9 / 5 + 32;
}
void charts()
{
    cout << "Fahrenheit\t\tCelsius\n";
    for (int i = 0; i <= 100; i++)
    {
        cout << i << "\t\t" << celsius(i) << endl;
    }
    cout << endl;
    cout << "Celsius\t\tFahrenheit\n";
    for (int i = 0; i <= 100; i++)
    {
        cout << i << "\t\t" << fahrenheit(i) << endl;
    }
}

int main()
{
    charts();
}