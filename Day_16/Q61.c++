#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,min,sum1=0,sum2=0;
    
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
            cout << "Please enter a poitive number: " << endl;
        }
    }

    vector<int> array(terms);

    for(i=0;i<terms;i++)
    {
        cout << "Enter element at index, " << i << ": ";
        cin >> array[i];
    }

    min = array[0];
    for(i=0;i<terms;i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }

    for(i=0;i<terms;i++)
    {
        sum1 += array[i];
    }

    for(i=min;i<=terms+min;i++)
    {
        sum2 += i;
    }

    cout << "Missing element is " << sum2 - sum1;

    return 0;
}