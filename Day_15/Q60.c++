#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,count=0;

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

    for(i=0;i<terms;i++)
    {
        if(array[i] != 0)
        {
            array[count] = array[i];
            count++ ;
        }
    }

    for(count;count<terms;count++)
    {
        array[count] = 0;
    }

    cout << "ARRAY WHERE ZEROES ARE AT END: ";

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}