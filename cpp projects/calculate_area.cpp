#include<iostream>
using namespace std;
#define PI 3.14
class Shape
{
public:
    virtual void calculateArea(){};

};
class Rect:public Shape
{
    public:
    int length;
    int breadth;
    Rect(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void calculateArea()
    {
        cout<<"Area of rectangle is "<<length*breadth<<endl;
    }
};
class Circle: public Shape
{
    public:
    int radius;
    Circle(int r)
    {
        radius = r;
    }
    void calculateArea()
    {
        cout<<"Area of circle is "<<PI*radius*radius<<endl;
    }
};
int main()
{
    cout << "Enter Rect length and breadth: ";
    int length, breadth;
    cin >> length >> breadth;
    Rect r(length, breadth);
    r.calculateArea();

    cout << "Enter Circle radius: ";
    int radius;
    cin >> radius;
    Circle c(radius);
    c.calculateArea();
    
    return 0;
}