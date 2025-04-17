#include<iostream>
#include<string>
using namespace std;
int main()
{
    int G{};
    string str;
    while(true)
    {
        cin >> G;
        if(G == 0)
        {
            break;
        }
        cin >> str;
        int len = str.length();
        for(int i = 0; i < len; i+=len/G)
        {
            for(int j = i+len/G-1; j >= i; j--)
            {
                cout << str[j];
            }
        }
    }
}