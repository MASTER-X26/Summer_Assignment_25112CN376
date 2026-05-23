#include <iostream>

int main()
{
    int digits,i,number,temp;

    std::cout << "Enter a number to count its digits = ";
    std::cin >> number;

    digits = 0;
    temp = number;
    while(number>0)
    {
        number /= 10;
        digits ++;
    }

    std::cout << "No of digits of " << temp << " is = " << digits;
    return 0;
}
