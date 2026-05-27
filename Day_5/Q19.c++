#include <iostream>
using namespace std;

int main()
{
    int number,i;

    cout << "Enter a number to find its factors: ";
    cin >> number;

    cout << "Factors of " << number << " are ";

    for(i=1;i<=number;i++)
    {
        if(number%i == 0)
        {
            cout << i << ",";
        }
    }

    return 0;
}