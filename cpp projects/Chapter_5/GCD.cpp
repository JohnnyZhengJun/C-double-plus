#include<iostream>
#include<algorithm>
using namespace std;

int GCD(int a, int b)
{
    while((a%=b)&&(b%=a));
    return a+b;
}

int main()
{
    int N, G;
    while(cin >> N && N)
    {
        G = 0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)
            {
                G += GCD(i,j);
            }
        }
        cout << G << endl;
    }
}