#include <iostream>
using namespace std;

int main()
{
    int i,nth_term,term1,term2,term3;

    cout << "Enter the last term of fibonacci series: ";
    cin >> nth_term;

    term1 = 0;
    term2 = 1;

    for(i = 0;i <= nth_term-3; i++)
        {
            term3 = term1 + term2;
            term1 = term2;
            term2 = term3;
        }

    cout << "Nth value in fibonacci series = " << term3;
}