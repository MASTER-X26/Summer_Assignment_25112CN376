#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms;

    while (true)
    {
        cout << "Enter number of terms in array: ";
        cin >> terms;

        if(terms > 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a positive integer" << "\n";
        }
    }

    vector<int> array(terms);

    for(i=0;i<terms;i++)
    {
        cout << "Enter element in array at index, " << i << ": ";
        cin >> array[i];
    }

    cout << "REVERSE ARRAY: ";

    for(i=terms-1;i>=0;i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}