#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int number)
{
    int count = 0,digit,temp1,temp2,sum = 0;
    
    temp1 = number;
    temp2 = number;

    while(temp1 > 0)
    {
        count ++;
        temp1 /= 10;
    }

    while(temp2 > 0)
    {
        digit = temp2 % 10;
        sum += round(pow(digit,count));
        temp2 /= 10;
    }

    if(number == sum)
    {
        return true;
    }

    else
    {
        return false;
    }

    return 0;
}

int main()
{
    int number;

    cout << "Enter a number to check if its armstrong or not: ";
    cin >> number;

    if(armstrong(number) == true)
    {
        cout << number << " is a armstrong number";
    }

    else
    {
        cout << number << " is not a armstrong number";
    }

    return 0;
}