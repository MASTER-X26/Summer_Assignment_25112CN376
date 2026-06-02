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
            cout << "Please enter a psotive integer" << "\n";
        }
    }

    vector<int> array(terms);

    for(i=0;i<terms;i++)
    {
        cout << "Enter element in index value " << i << " of array: ";
        cin >> array[i];
    }

    cout << "ARRAY: ";

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}