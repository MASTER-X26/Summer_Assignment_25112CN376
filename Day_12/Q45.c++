#include <iostream>
using namespace std;

int palindrome(int number)
{
    int temp,remainder,reverse = 0;

    temp = number;

    while(number > 0)
    {
        remainder = number % 10;
        reverse = 10*reverse + remainder;
        number /= 10;
    }

    if(temp == reverse)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int number;

    cout << "Enter a number to check if its a palindrome or not: ";
    cin >> number;

    if(palindrome(number) == true)
    {
        cout << number << " is a palindrome number";
    }

    else
    {
        cout << number << " is not a palindrome number";
    }

    return 0;
}