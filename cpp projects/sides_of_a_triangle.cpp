#include<iostream>
using namespace std;
int sides_of_a_triangle()
{
    double a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout << "The triangle is valid.";
    }
    else
    {
        cout << "The triangle is invalid.";
    }
    return 0;
}
int sides_of_a_right_triangle()
{
    double a, b, c;
    cout << "\nEnter the sides of the triangle: ";
    cin >> a >> b >> c;
    if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
    {
        cout << "The triangle is a right triangle.";
    }
    else
    {
        cout << "The triangle is not a right triangle.";
    }
    return 0;
}
int main()
{
    sides_of_a_triangle();
    sides_of_a_right_triangle();
    return 0;
}