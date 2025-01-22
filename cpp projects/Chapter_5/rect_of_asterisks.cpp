#include<iostream>
using namespace std;
void Rect_of_asterisks(int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int width, height;
    cout << "Enter the width and height of the rectangle: ";
    cin >> width >> height;
    Rect_of_asterisks(width, height);
    cout << "\n";
    return 0;
}