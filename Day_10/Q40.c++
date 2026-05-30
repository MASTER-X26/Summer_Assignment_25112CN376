#include <iostream>
using namespace std;

int main()
{
    int rows,i,j,k;
    char letter;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i=1;i<=rows;i++)
    {

        letter = 'A';

        for(k=1;k<=(rows-i);k++)
        {
            cout << " ";
        }

        for(j=1;j<=i;j++)
        {
            cout << letter;
            letter ++;
            
            if(j==i)
            {
                letter --;
            }
        }

        for(j=i-1;j>=1;j--)
        {
            letter --;
            cout << letter;
        }
        cout << "\n";
    }
}