#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,terms1,terms2,terms3;
    
    while (true)
    {
        cout << "Enter number of terms in array1: ";
        cin >> terms1;

        if(terms1 > 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a poitive number: " << endl;
        }
    }

    vector<int> array1(terms1);

    for(i=0;i<terms1;i++)
    {
        cout << "Enter element in array1 at index, " << i << ": ";
        cin >> array1[i];
    }

    while (true)
    {
        cout << "Enter number of terms in array2: ";
        cin >> terms2;

        if(terms2 > 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a poitive number: " << endl;
        }
    }

    vector<int> array2(terms2);

    for(i=0;i<terms2;i++)
    {
        cout << "Enter element in array2 at index, " << i << ": ";
        cin >> array2[i];
    }

    terms3 = terms1 + terms2;

    vector<int> array3(terms3);

    cout << "ARRAY1: ";

    for(i=0;i<terms1;i++)
    {
        array3[i] = array1[i];
        cout << array1[i] << " ";
    }

    cout << endl;

    for(i=0;i<terms2;i++)
    {
        array3[5+i] = array2[i];
    }

    cout << "ARRAY2: ";

    for(i=0;i<terms2;i++)
    {
        cout << array2[i] << " ";
    }

    cout << endl;

    cout << "MERGED ARRAY: ";

    for(i=0;i<terms3;i++)
    {
        cout << array3[i] << " ";
    }

    return 0;
}