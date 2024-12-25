#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compute the Longest Common Subsequence (LCS) length
int longestCommonSubsequence(const string& A, const string& B) 
{
    int n = A.size();
    int m = B.size();

    // Create a 2D lcs table
    vector<vector<int>> lcs(n + 1, vector<int>(m + 1, 0));

    // Fill the DP table
    for (int i = 1; i <= n; ++i) 
    {
        for (int j = 1; j <= m; ++j) 
        {
            if (A[i - 1] == B[j - 1]) 
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } 
            else 
            {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }

    // The length of the LCS is stored in dp[n][m]
    return lcs[n][m];
}

int main() {
    string A, B;

    while (cin >> A >> B) {
        // Compute and output the LCS length for each pair of strings
        cout << longestCommonSubsequence(A, B) << endl;
    }

    return 0;
}
