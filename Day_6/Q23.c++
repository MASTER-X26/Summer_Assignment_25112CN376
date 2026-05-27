#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,decimal,temp,remainder,count;

    vector<int> Binary = {};

    cout << "Enter a decimal number: ";
    cin >> decimal;

    count = 0;
    temp = decimal;
    cout << "BINARY NO: ";

    while(decimal > 0)
    {
        remainder = decimal % 2;
        Binary.push_back(remainder);
        decimal /= 2;
    }

    for(i = Binary.size()-1;i >= 0;i--)
    {
        if(Binary[i] == 1)
        {
            count++;
        }
    }

    cout << "Set bits of " << temp << " is " << count;

    return 0;
}