#include <iostream>

int main()
{
    int num,i;

    std::cout << "Enter a number to find the sum of first n natural numbers: ";
    std::cin >> num;

    int sum = 0;

    for(i=0;i<=num;i++)
    {
        sum += i;
    }

    std::cout << "Sum of " << num << " natural numbers is = " << sum;

    return 0;
}