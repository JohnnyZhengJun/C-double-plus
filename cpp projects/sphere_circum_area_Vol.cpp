/*
Write a program that reads the radius of a sphere (as a double value) and computes the circumference, area and volume of the spheres. Use the value 3.14159 for π.
*/
#include <iostream>
#include <cmath>
#define pi 3.14159
using namespace std;
int main()
{
    double r, circumference, A, V; // Vol = 4/3 * pi * r^3, A = 4 * pi * r^2, circumference = 2 * pi * r
    cout << "Enter the radius of the sphere: ";
    cin >> r;

    circumference = 2 * pi * r;
    A = 4 * pi * pow(r, 2);
    V = (4 / 3) * pi * pow(r, 3);
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << A << endl;
    cout << "Volume: " << V << endl;

    return 0;
}