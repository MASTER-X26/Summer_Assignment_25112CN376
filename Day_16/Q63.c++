#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,element,terms,sum=0;
    
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

    cout << "Enter sum to find pair: ";
    cin >> sum;

    for(i=0;i<terms;i++)
    {
        element = array[i];

        for(j=i;j<terms;j++)
        {
            if(array[i] + array[j] == sum)
            {
                cout << "PAIR OF SUM, " << sum << " IS = " << array[i] << " and " << array[j] << endl;
            }
        }
    }

    return 0;
}