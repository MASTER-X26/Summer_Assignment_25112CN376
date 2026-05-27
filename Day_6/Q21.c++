#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,decimal,temp,remainder;

    vector<int> Binary = {};

    cout << "Enter a decimal number: ";
    cin >> decimal;

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
        cout << Binary[i];
    }

    return 0;
}