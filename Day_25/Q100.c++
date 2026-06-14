#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int i,j,terms;
    string temp;
    vector<string> count;

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

    for(i=0;i<terms-1;i++)
    {
        for(j=0;j<terms-i-1;j++)
        {
            if(array[j].length() > array[j+1].length())
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << "LENGTH SORTED STRING ARRAY: " << endl;

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}