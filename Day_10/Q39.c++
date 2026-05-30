#include <iostream>
using namespace std;

int main()
{
    int rows,i,j,k;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i=1;i<=rows;i++)
    {
        for(k=1;k<=(rows-i);k++)
        {
            cout << " ";
        }

        for(j=1;j<=i;j++)
        {
            cout << j;
        }

        for(j=i-1;j>=1;j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}