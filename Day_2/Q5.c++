#include <iostream>

int main()
{
    int i,number,sum,temp,remainder;

    std::cout << "Enter a number to find its sum: ";
    std::cin >> number;

    temp = number;
    sum = 0;

    while(number>0)
    {
        remainder = number%10;
        sum += remainder;
        number/=10;
    }

    std::cout << "Sum of the digits of " << temp << " is = " << sum;

    return 0;
}