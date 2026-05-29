#include <iostream>
using namespace std;

int main()
{
    int rows,i,j;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i=rows;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}