#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"N" << "\t"  << "5*N" << "\t" << "10*N" << "\t" << "15*N" << endl;
    N = 1;
    while(N <= 12)
    {
        cout << N << "\t" << 5*N << "\t" << 10*N << "\t" << 15*N << endl;
        N++;
    }
    return 0;
}