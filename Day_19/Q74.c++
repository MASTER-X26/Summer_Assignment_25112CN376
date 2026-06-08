#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,rows1,columns1,rows2,columns2;

    while (true)
    {
        cout << "Enter number of rows1 and columns1 in R X C matrix1: ";
        cin >> rows1 >> columns1;

        if(rows1 > 0  && columns1 > 0)
        {
            break;
        }

        else
        {
            cout << "Please enter a positive integer: " << endl;
        }
    }

    vector<vector<int>> matrix1(rows1, vector<int>(columns1));

    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            cout << "Enter the " << j + 1 << " Element at row " << i + 1 << ": ";
            cin >> matrix1[i][j];
        }
    }

    while (true)
    {
        cout << "Enter number of rows2 and columns2 in R X C matrix2: ";
        cin >> rows2 >> columns2;

        if(rows2 > 0  && columns2 > 0)
        {
            break;
        }

        else
        {
            cout << "Please enter a positive integer: " << endl;
        }
    }

    vector<vector<int>> matrix2(rows2, vector<int>(columns2));

    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            cout << "Enter the " << j + 1 << " Element at row " << i + 1 << ": ";
            cin >> matrix2[i][j];
        }
    }

    cout << "MATRIX1: " << endl;
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            cout << matrix1[i][j] << " "; 
        }
        cout << endl;
    }

    cout << endl;

    cout << "MATRIX2: " << endl;
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            cout << matrix2[i][j] << " "; 
        }
        cout << endl;
    }

    cout << endl;

    if(rows1 == rows2 && columns1 == columns2)
    {
        vector<vector<int>> matrix3(rows1, vector<int>(columns2));

        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns2;j++)
            {
                matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        cout << "SUBTRACTION OF BOTH MATRIX: " << endl;
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns2;j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "Please enter the rows and columns of both array similar";
    }

    return 0;
}