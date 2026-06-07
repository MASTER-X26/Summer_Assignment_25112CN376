#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,temp,max,min1;

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
        max = i;

        for(j=i+1;j<terms;j++)
        {
            if(array[max] < array[j])
            {
                max = j;
            }
        }

        temp = array[i];
        array[i] = array[max];
        array[max] = temp;
    }

    cout << "SORTED ARRAY IN DESCENDING ORDER: ";
    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}