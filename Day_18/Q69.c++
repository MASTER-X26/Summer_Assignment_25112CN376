#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,temp;

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
        for(j=0;j<terms-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << "BUBBLE SORTED ARRAY: ";
    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}