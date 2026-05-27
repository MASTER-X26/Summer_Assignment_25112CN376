#include <iostream>
using namespace std;

int main()
{
    int i,max_terms,term1,term2,term3;

    cout << "Enter a number to print a fibonacci series upto that term: ";
    cin >> max_terms;

    term1 = 0;
    term2 = 1;

    if(max_terms <= 0)
    {
        cout << "Write a postitive, non zero term";
    }

    else if(max_terms == 1)
    {
        cout << "FIBONACCI SERIES = " << term1;
    }

    else if(max_terms == 2)
    {
        cout << "FIBONACCI SERIES = " << term1 <<  " " << term2;
    }

    else
    {
        term1 = 0;
        term2 = 1;

        cout << "FIBONACCI SERIES = ";
        cout << term1 << " " << term2;

        for(i = 0;i <= max_terms-3; i++)
        {
            term3 = term1 + term2;
            term1 = term2;
            term2 = term3;

            cout << " " << term3;
        }

    }
   
    return 0;
}