#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,temp1,temp2,remainder,digits,sum,range;

    cout << "Enter the range to check if number in that range is armstrong: ";
    cin >> range;

    for(i=1;i<=range;i++)
    {
        digits = 0;
        temp1 = i;
        temp2 = i;
        sum = 0;

        while(temp1 > 0)
        {
            temp1 /= 10;
            digits ++;
        }

        while(temp2 > 0)
        {
            remainder = temp2 % 10;
            sum += round(pow(remainder,digits));
            temp2 /= 10;
        }
        
        if(i == sum)
        {
            cout << i << " is an armstrong number";
            cout << "\n";
        }
    }   
    return 0;
}