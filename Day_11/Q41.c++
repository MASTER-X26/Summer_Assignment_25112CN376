#include <iostream>
using namespace std;

int sum_of_2numbers(int number1,int number2)
{
    return (number1 + number2);
}

int main()
{
    int number1,number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Sum of " << number1 << " and " << number2 << " is " << sum_of_2numbers(number1,number2);
}