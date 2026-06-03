#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,max,Second_max_element=0;

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

    max = array[0];
    Second_max_element = array[0];

    for(i=0;i<terms;i++)
    {
        if(array[i] > max)
        {
           max = array[i];
        }
    }

    for(i=0;i<terms;i++)
    {
        if(array[i] > Second_max_element && array[i] != max)
        {
           Second_max_element = array[i];
        }
    }


    cout << "Second largest element in array = " << Second_max_element;

    return 0;
}