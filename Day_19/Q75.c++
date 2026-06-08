#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,rows,columns;

    while (true)
    {
        cout << "Enter number of rows and columns in R X C matrix1: ";
        cin >> rows >> columns;

        if(rows > 0  && columns > 0)
        {
            break;
        }

        else
        {
            cout << "Please enter a positive integer: " << endl;
        }
    }

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cout << "Enter the " << j + 1 << " Element at row " << i + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << "MATRIX1: " << endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }

    cout << endl;

    cout << "TRANSPOSE OF MATRIX: " << endl;
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}