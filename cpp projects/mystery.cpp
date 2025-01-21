#include<iostream>
using namespace std;
int main()
{
    int row{12};
    unsigned int col;
    while(row >= 0)
    {
        col = 1;
        while(col <= 6)
        {
            if(row % 3 == 0)
            {
                cout << "#";
            }
            else
            {
                cout << (col % 6 ? "-" : ">");
            }
            ++col;
        }
        --row;
        cout << endl;
    }
    return 0;
}