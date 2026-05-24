#include <iostream>

int main()
{
    int i,number,reverse,temp,remainder;

    std::cout << "Enter a number to check if its palindrome or not : ";
    std::cin >> number;

    temp = number;
    reverse = 0;

    while(number>0)
    {
        remainder = number%10;
        reverse = 10*reverse + remainder;
        number/=10;
    }

    if(reverse == temp)
    {
        std::cout << temp << " is a palindrome number";
    }
    
    else
    {
        std::cout << temp << " is not a palindrome number";
    }
    return 0;
}