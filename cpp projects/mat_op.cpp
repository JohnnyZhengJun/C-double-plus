#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;
class Mat
{
private:
    vector<vector<int>> mat;
    int rows, cols;
public:
    
    void setMat()
    {
        cout << "Enter the number of rows and columns: ";
        cin >> rows >> cols;
        mat.resize(rows, vector<int>(cols));
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    
    void transpose()
    {
        vector<vector<int>> temp(cols, vector<int>(rows));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                temp[j][i] = mat[i][j];
            }
        }
        mat = temp;
        swap(rows, cols);
    }

    void displayMat() 
    {
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Mat m;
    m.setMat();
    m.displayMat();

    m.transpose();
    m.displayMat();
    return 0;
}