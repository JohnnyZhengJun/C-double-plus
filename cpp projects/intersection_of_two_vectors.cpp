#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n; // inputting size of the vectors
    bool count = 0;
    vector<int>v1(n);
    vector<int>v2(n);

    for(int i=0; i<n;i++)
    {
        cin >> v1[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v1[i] == v2[j])
            {
                count = 1;
                cout << v1[i] << " ";
            }
        }
    }
    return 0;
}