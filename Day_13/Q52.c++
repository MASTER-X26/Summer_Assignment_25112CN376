#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms,even=0,odd=0;

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

    for(i=0;i<terms;i++)
    {
        if(array[i] % 2 == 0)
        {
            even ++;
        }
        else
        {
            odd ++;
        }
    }

    cout << "Even values in array = " << even;
    cout << "\n";
    cout << "Odd values in array = " << odd;
    
    return 0;
}