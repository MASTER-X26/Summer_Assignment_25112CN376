#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i,terms1,terms2;

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

    sort(array1.begin(),array1.end());
    sort(array2.begin(),array2.end());

    vector<int> array3;

    array3 = array1;

    for(i=0;i<array2.size();i++)
    {
        array3.push_back(array2[i]);
    }

    sort(array3.begin(),array3.end());

    cout << "MERGED ARRAY" << endl;

    for(i=0;i<array3.size();i++)
    {
        cout << array3[i] << " ";
    }

    return 0;
}