#include <iostream>
using namespace std;

int max(int number1,int number2)
{
    if(number1 > number2)
    {
        return number1;
    }

    else
    {
        return number2;
    }
}

int main()
{
    int number1,number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Maximum between " << number1 << " and " << number2 << " is " << max(number1,number2);
}