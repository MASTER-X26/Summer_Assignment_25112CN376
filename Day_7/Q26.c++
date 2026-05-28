#include <iostream>
using namespace std;

int fibonacci(int terms)
{
    if(terms == 1)
    {
        return 0;
    }

    else if(terms == 2)
    {
        return 1;
    }

    else
    {
        return (fibonacci(terms - 1) + fibonacci(terms - 2));
    }
}
 
int main()
{
    int i,terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    cout << "FIBONAACI SERIES: ";

    for(i=1;i<=terms;i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}