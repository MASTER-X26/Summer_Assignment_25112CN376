#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,element,temp,terms,beg,end,mid;

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

    cout << "Enter element to find it in array: ";
    cin >> element;

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

    cout << "SORTED ARRAY: ";
    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    beg = 0;
    end = terms-1;

    while(beg <= end)
    {
        mid = (beg + end)/2;

        if(array[mid] > element)
        {
            end = mid - 1;
        }
        else if(array[mid] < element)
        {
            beg = mid + 1;
        }
        else
        {
            break;
        }
    }

    if(element == array[mid])
    {
        cout << "ELEMENT FOUND IN ARRAY AT INDEX: " << mid;
    }

    else
    {
        cout << "ELEMENT NOT FOUND IN ARRAY";   
    }

    return 0;
}