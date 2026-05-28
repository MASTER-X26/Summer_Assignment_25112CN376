#include <iostream>
using namespace std;

int reverse_number(int original_number,int reverse = 0)
{
    if(original_number == 0)
    {
        return reverse;
    }

    else
    {
        return reverse_number(original_number / 10,reverse * 10 + original_number % 10);
    }
}

int main()
{
    int original_number,reverse;

    cout << "Enter a number to find its reverse: ";
    cin >> original_number;

    reverse = reverse_number(original_number);
    
    cout << "Reverse of " << original_number << " is " << reverse;

    return 0;
}