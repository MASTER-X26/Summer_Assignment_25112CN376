#include <iostream>
using namespace std;

int Perfect(int number)
{
    int i,sum=0;

    for(i=1;i<number;i++)
    {
        if(number%i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int number;

    cout << "Enter a positive number to check if its a perfect number: ";
    cin >> number;

    if(number == 0)
    {
        cout << "0 is not a perfect number";
    }

    else if(number == Perfect(number))
    {
        cout << number << " is a perfect number";
    }

    else
    {
        cout << number << " is not a perfect number";
    }

    return 0;
}