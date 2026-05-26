#include <iostream>

int main()
{
    int i,number1,number2,GCD;

    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    for(i=1;(i<=number1 && i<=number2);i++)
    {
        if(number1%i == 0 && number2%i == 0)
        {
            GCD = i;
        }
    }

    std::cout << "GCD of " << number1 << " and " << number2 << " is " << GCD;

    return 0;
}