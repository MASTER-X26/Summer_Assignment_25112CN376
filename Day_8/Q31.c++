#include <iostream>
using namespace std;

int main()
{
    int rows,i,j;

    cout << "Enter number of rows: ";
    cin >> rows;

    char letter;

    for(i=1;i<=rows;i++)
    {
        letter = 'A';
        
        for(j=1;j<=i;j++)
        {
            cout << letter;
            letter ++;
        }
        cout << "\n";
    }

    return 0;
}