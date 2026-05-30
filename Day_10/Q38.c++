#include <iostream>
using namespace std;

int main()
{
    int rows,i,j,k;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i=rows;i>=1;i--)
    {
        for(k=1;k<=(rows-i);k++)
        {
            cout << " ";
        }
        
        for(j=1;j<=(2*i - 1);j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}