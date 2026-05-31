#include <iostream>
using namespace std;

int factorial(int number)
{
    int i,factorial = 1;

    for(i=1;i<=number;i++)
    {
        factorial *= i;
    }
    
    return factorial;
}

int main()
{
    int number;

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    if(number < 0)
    {
        cout << "Please enter a postive integer";
    }

    else
    {
        cout << "Factorial of " << number << " is " << factorial(number);
    }

    return 0;
}