/*
Define a function hypotenuse that calculates the hypotenuse of
 a right triangle when the other two sides are given. The function should take two double arguments
 and return the hypotenuse as a double. Use this function in a program to determine the hypotenuse
 for each of the triangles shown below.  
*/
#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double a, double b)
{
    return sqrt(a * a + b * b);
}
int main()
{
    cout << "Triangle 1: " << hypotenuse(3.0, 4.0) << endl;
    cout << "Triangle 2: " << hypotenuse(5.0, 12.0) << endl;
    cout << "Triangle 3: " << hypotenuse(8.0, 15.0) << endl;
    return 0;
}