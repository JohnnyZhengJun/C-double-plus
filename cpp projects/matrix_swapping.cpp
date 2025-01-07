#include<iostream>
using namespace std;
class MatrixOperation
{
    private:
        int mat[4][4];
    public:
    void setMatrix(int mat[4][4])
    {
        for(int i = 0; i<4; i++)
        {
            for(int j = 0; j<4; j++)
            {
                this->mat[i][j] = mat[i][j];
            }
        }
    }
    void swapRows(int row1, int row2)
    {
        for(int i = 0; i<4; i++)
        {
            int temp = mat[row1][i];
            mat[row1][i] = mat[row2][i];
            mat[row2][i] = temp;
        }
    }
    void swapCols(int col1, int col2)
    {
        for(int i = 0; i<4; i++)
        {
            int temp = mat[i][col1];
            mat[i][col1] = mat[i][col2];
            mat[i][col2] = temp;
        }
    }
    void displayMatrix()
    {
        for(int i = 0; i<4; i++)
        {
            for(int j = 0; j<4; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    int mat[4][4];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin >> mat[i][j];
        }
    }
    MatrixOperation m;
    m.setMatrix(mat);
    m.swapRows(0, 1);
    m.swapCols(0, 1);
    m.displayMatrix();
    return 0;
}