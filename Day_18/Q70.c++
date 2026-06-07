#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,temp,min,min1;

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
            cout << "Please enter a positive integer: " << endl;
        }
    }

    vector<int> array(terms);

    for(i=0;i<terms;i++)
    {
        cout << "Enter an element at index, " << i << ": ";
        cin >> array[i];
    }

    for(i=0;i<terms;i++)
    {
        min = i;

        for(j=i+1;j<terms;j++)
        {
            if(array[min] > array[j])
            {
                min = j;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    cout << "SELECTION SORTED ARRAY: ";
    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}