#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int n{},m{};
    cin >> n >> m; // Input the size of the matrix
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }

    //Printing the original matrix
    cout << "Original matrix is: \n";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    int maxSum = INT_MIN;
    int maxRow{}, maxCol{};

    for(int i = 0; i <= n - 3; i++)
    {
        for(int j = 0; j <= m - 3; j++)
        {
            int currentsum = 0;
            for(int k = i; k < i + 3; k++)
            {
                for(int l = j; l < j + 3; l++)
                {
                    currentsum += v[k][l];
                }
            }
            if(currentsum > maxSum)
            {
                maxSum = currentsum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Print the identified submatrix and the max sum
    for(int i = maxRow; i < maxRow + 3; i++)
    {
        for(int j = maxCol; j < maxCol + 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Max sum is: " << maxSum << "\n";
    return 0;
}
