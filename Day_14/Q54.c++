#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,element,frequency=0;

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

    cout << "Enter an element to find its frequency(count): ";
    cin >> element;

    for(i=0;i<terms;i++)
    {
        if(array[i] == element)
        {
            frequency ++;
        }
    }

    cout << "Frequency of " << element << " = " << frequency;

    return 0;
}