#include <iostream>
using namespace std;

int main()
{
    int number,temp,sum,digit,i,factorial;

    cout << "Enter a number to check if its strong number: ";
    cin >> number;

    temp = number;
    sum = 0;

    while(number > 0)
    {
        factorial = 1;
        digit = number%10;

        for(i=1;i<=digit;i++)
        {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if(temp == sum)
    {
        cout << temp << " is a strong number";
    }

    else
    {
        cout << temp << " is not a strong number";
    }
    
    return 0;
}   