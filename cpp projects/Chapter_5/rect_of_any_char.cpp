#include<iostream>
using namespace std;
int rect_char(char ch, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    char ch; 
    int width, height;
    cout << "Enter the character, width and height of the rectangle: ";
    cin >> ch >> width >> height;
    rect_char(ch, width, height);
    cout << "\n";
    
    return 0;
}