#include <iostream>
using namespace std;

int main()
{
    int number,sum,i;

    cout << "Enter a number to check if its perfect number: ";
    cin >> number;
    
    sum = 0;

    if(number <= 0)
    {
        cout << "Please write a non zero positive integer";
    }

    else
    {
        for(i=1;i<number;i++)
        {
            if(number % i == 0)
            {
                sum += i;
            }
        }

        if(number == sum)
        {
            cout << number << " is a perfect number";
        }
        
        else
        {
            cout << number << " is not a perfect number";
        }
    }

    return 0;   
}