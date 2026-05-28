#include <iostream>
using namespace std;

int sum_of_digits(int number)
{
    if(number == 0)
    {
        return 0;
    }

    else
    {
        return (number % 10) + sum_of_digits(number / 10);
    }
}

int main()
{
    int number,sum;

    cout << "Enter a number to find the sum of its digits: ";
    cin >> number;

    sum = sum_of_digits(number);
    
    cout << "Sum of digits of " << number << " is " << sum;

    return 0;
}