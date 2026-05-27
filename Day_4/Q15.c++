#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,number,temp1,temp2,remainder,digits,sum;

    cout << "Enter a number to check if its armstrong: ";
    cin >> number;

    digits = 0;
    temp1 = number;
    temp2 = number;
    sum = 0;

    while(number > 0)
    {
        number /= 10;
        digits ++;
    }

    while(temp1 > 0)
    {
        remainder = temp1 % 10;
        sum += round(pow(remainder,digits));
        temp1 /= 10;
    }
    
    if(temp2 == sum)
    {
        cout << temp2 << " is an armstrong number";
    }

    else
    {
        cout << temp2 << " is not an armstrong number";
    }

    return 0;
}