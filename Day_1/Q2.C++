#include <iostream>

int main()
{
    int i,number;

    std::cout << "Write a number to find its table = ";
    std::cin >> number;

    for(i=1;i<=10;i++)
    {
        std::cout << number << " X " << i << " is = " << number*i;
        std::cout << "\n";
    }

    return 0;
}