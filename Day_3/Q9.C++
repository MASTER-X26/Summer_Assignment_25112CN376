#include <iostream>

int main()
{
    int i,number,count;

    std::cout << "Enter a number to check if its prime or not: ";
    std::cin >> number;

    count = 0;

    for(i=1;i<=number;i++)
    {
        if(number%i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        std::cout << number << " is prime a number";
    }

    else
    {
        std::cout << number << " is not a prime number";
    }

    return 0;
}