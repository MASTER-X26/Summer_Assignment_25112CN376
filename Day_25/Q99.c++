#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int i,terms;

    while (true)
    {
        cout << "Enter number of terms in array1: ";
        cin >> terms;

        if(terms > 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a poitive number: " << endl;
        }
    }

    vector<string> array(terms);

    for(i=0;i<terms;i++)
    {
        cout << "Enter string in array at index, " << i << ": ";
        cin >> array[i];
    }

    cout << "ORIGINAL STRING ARRAY: " << endl;

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    
    sort(array.begin(),array.end());

    cout << "ALPHABETIC SORTED STRING ARRAY: " << endl;

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}