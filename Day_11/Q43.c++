#include <iostream>
using namespace std;

int prime(int number)
{
    int i,count = 0;

    for(i=1;i<=number;i++)
    {
        if(number%i == 0)
        {
            count ++;
        }
    }

    if(count == 2)
    {
        cout << number << " is a prime number";
    }

    else
    {
        cout << number << " is not a prime number";
    }
    
    return 0;
}

int main()
{
    int number;

    cout << "Enter a number to check if its prime or not: ";
    cin >> number;

    if(number <= 0)
    {
        cout << "Please enter a non-zero postive integer";
    }

    else
    {
        prime(number);
    }

    return 0;
}