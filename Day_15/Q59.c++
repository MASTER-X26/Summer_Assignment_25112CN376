#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,position,shifts;

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

    cout << "Enter how many times array have to be left shifted: ";
    cin >> shifts;

    for(i=0;i<shifts;i++)
    {
        position = array[terms-1];

        for(j=terms-1;j>=0;j--)
        {
            array[j] = array[j-1];
        }
    
    array[0] = position;
    }
        
    cout << "LEFT SHIFTED ARRAY: ";

    for(i=0;i<terms;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}