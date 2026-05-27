#include <iostream>
using namespace std;

int main()
{
    int i,j,number,factor,count;

    cout << "Enter a number to find its largest prime factor: ";
    cin >> number;

    for(i=1;i<number;i++)
    {
        if(number % i == 0)
        {
            count = 0;

            for(j=1;j<=i;j++)
            {
                if((i % j == 0) && (number % i == 0))
                {
                    count ++;
                }
            }

            if(count == 2)
            {
                factor = i;
            }

        }
    }
    
    cout << "Largest prime factor of " << number << " is " << factor;

    return 0;
}