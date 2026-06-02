#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms;
    float sum = 0;
    float average;

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
        sum += array[i];
    }

    average = sum/terms;

    cout << "Sum of elements in array = " << sum;
    cout << "\n";
    cout << "Average of elements in array = " << average;

    return 0;
}