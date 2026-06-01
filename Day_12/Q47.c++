#include <iostream>
using namespace std;

void Fibonacci(int terms)
{
    int i,a=0,b=1,c;

    if(terms <= 0)
    {
        cout << "Please enter a non-zero postive integer";
    }

    else if(terms == 1)
    {
        cout << a;
    }

    else
    {
        cout << "FIBONACCI SERIES: ";
        cout << a << " " << b << " ";

        for(i=2;i<terms;i++)
        {
            c = a + b;
            cout << c << " ";

            a = b;
            b = c;
        }
    }
}

int main()
{
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    Fibonacci(terms);

    return 0;
}