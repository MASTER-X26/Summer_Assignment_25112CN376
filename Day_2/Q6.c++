#include <iostream>

int main()
{
    int i,number,reverse,temp,remainder;

    std::cout << "Enter a number to find its reverse: ";
    std::cin >> number;

    temp = number;
    reverse = 0;

    while(number>0)
    {
        remainder = number%10;
        reverse = 10*reverse + remainder;
        number/=10;
    }

    std::cout << "Reverse of " << temp << " is = " << reverse;

    return 0;
}