#include <iostream>
using namespace std;

int main()
{
    int number,power,exponentiation,i;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> power;

    exponentiation = 1;

    for(i=1;i<=power;i++)
    {
        exponentiation *= number;
    }

    cout << number << " ** " << power << " = " << exponentiation;

    return 0;
}