#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,max,min;

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
        cout << "Enter element in " << i << " index of array: ";
        cin >> array[i];
    }

    max = array[0];
    min = array[0];

    for(i=0;i<terms;i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
        else if(min > array[i])
        {
            min = array[i];
        }
    }

    cout << "Max value in array = " << max;
    cout << "\n";
    cout << "Min value in array = " << min;
    
    return 0;
}