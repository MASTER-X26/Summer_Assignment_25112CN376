#include <iostream>

int main()
{
    int i,number,factorial;

    std::cout << "Enter a number to find its factorial = ";
    std::cin >> number;

    factorial = 1;
    
    for(i=1;i<=number;i++)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << number << " is = " << factorial;
    return 0;
}
