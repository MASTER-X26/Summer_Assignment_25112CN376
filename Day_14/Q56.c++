#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,k,terms,element,frequency;
    bool iteration;

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
        iteration = true;

        for(k=0;k<i;k++)
        {
            if(array[i] == array[k])
            {
                iteration = false;
                break;
            }
        }

        if(iteration == true)
        {
            element = array[i];
            frequency = 0;

            for(j=0;j<terms;j++)
            {
                if(array[j] == element)
                {
                    frequency ++;
                }
            }

            if(frequency > 1)
            {
                cout << array[i] << " ";
            }
        }
    }

    cout << "are the duplicates in array";

    return 0;
}