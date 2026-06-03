#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,element,count=0;

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

    cout << "Enter element to check if it is in array: ";
    cin >> element;
    
    for(i=0;i<terms;i++)
    {
        if(array[i] == element)
        {
            count ++;
        }
    }

    if(count == 1)
    {
        cout << "ELEMENT FOUND IN ARRAY";
    }
    else
    {
        cout << "ELEMENT NOT FOUND IN ARRAY";
    }

    return 0;
}