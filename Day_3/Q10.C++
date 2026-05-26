#include <iostream>

int main()
{
    int i,j,temp,range,count;

    std::cout << "Enter a range to check if the numbers in that range are prime or not: ";
    std::cin >> range;

    for(i=1;i<=range;i++)
    {
        count = 0;
        temp = i;

        for(j=1;j<=temp;j++)
        {
            if(temp%j == 0)
            {
                count ++;
            }
        }
        if(count == 2)
        {
            std::cout << temp << " is a prime number";
            std::cout << "\n";
        }
    }
    
    return 0;
}