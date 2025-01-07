#include<iostream>
#include<vector>
using namespace std;

void spirallytraverse(vector<vector<long long int>> &v, long long int n, long long int m)
{
    long long int top = 0, bottom = n-1, left = 0, right = m-1;
    while(top <= bottom && left<=right)
    {
        for(long long int i = left; i<=right; i++)
        {
            cout << v[top][i] << " ";
        }
        top++;
        for(long long int i = top; i<=bottom; i++)
        {
            cout << v[i][right] << " ";
        }
        right--;
        if(top<=bottom)
        {
            for(long long int i = right; i>=left; i--)
            {
                cout << v[bottom][i] << " ";
            }
            bottom--;
        }
        if(left<=right)
        {
            for(long long int i = bottom; i>=top; i--)
            {
                cout << v[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    long long int n{}, m{};
    cin >> n >> m;
    vector<vector<long long int>> v(n, vector<long long int>(m));
    for(long long int i = 0; i<n; i++)
    {
        for(long long int j = 0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << "Spirally traversed matrix is: \n";
    spirallytraverse(v, n, m);
    return 0;
}