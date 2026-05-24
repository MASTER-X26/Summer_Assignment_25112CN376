#include <iostream>

int main()
{
    int i,number,Product,temp,remainder;

    std::cout << "Enter a number to find its Product: ";
    std::cin >> number;

    temp = number;
    Product = 1;

    while(number>0)
    {
        remainder = number%10;
        Product *= remainder;
        number/=10;
    }

    std::cout << "Product of the digits of " << temp << " is = " << Product;

    return 0;
}