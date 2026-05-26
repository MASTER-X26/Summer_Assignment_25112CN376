#include <iostream>

int main()
{
    int value,number1,number2,LCM;

    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    if(number1 > number2)
    {
        value = number1;
    }
    else
    {
        value = number2;
    }

    while(true)
    {
        if(value % number1 == 0 && value % number2 == 0)
        {
            LCM = value;
            break;
        }
        value ++;
    }

    std::cout << "LCM of " << number1 << " and " << number2 << " is " << LCM;

    return 0;
}