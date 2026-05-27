#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,power,binary,decimal,temp,digit;

    cout << "Enter a binary number: ";
    cin >> binary;

    decimal = 0;
    temp = binary;
    power = 0;

    while(binary > 0)
    {
        digit = binary % 10;
        decimal += digit*round((pow(2,power)));
        binary /= 10;
        power ++;
    }

    cout << "DECIMAL NO: " << decimal;

    return 0;
}