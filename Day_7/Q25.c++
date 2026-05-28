#include <iostream>
using namespace std;

int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }

    else
    {
        return (number*factorial(number-1));
    }
}

int main()
{
   int number,fact;

    cout << "Enter a number: ";
    cin >> number;

    fact = factorial(number);

    cout << "Factorial of " << number << " is " << fact;

    return 0;
}