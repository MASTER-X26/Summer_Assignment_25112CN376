#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms1,terms2,element;
    bool duplicate;
    bool repeat;

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

    cout << "ARRAY1: ";
    
    for(i=0;i<terms1;i++)
    {
        cout << array1[i] << " ";
    }

    cout << endl;

    cout << "ARRAY2: ";

    for(i=0;i<terms2;i++)
    {
        cout << array2[i] << " ";
    }

    cout << endl;

    vector<int> array3;

    for(i=0;i<array1.size();i++)
    {
        repeat = false;

        for(j=0;j<array3.size();j++)
        {
            if(array3[j] == array1[i])
            {
                repeat = true;
                break;
            }
        }

        if(repeat == false)
        {
            array3.push_back(array1[i]);
        }
    }
    
    for(i=0;i<array2.size();i++)
    {
        repeat = false;

        for(j=0;j<array3.size();j++)
        {
            if(array3[j] == array2[i])
            {
                repeat = true;
                break;
            }
        }

        if(repeat == false)
        {
            array3.push_back(array2[i]);
        }
    }

    cout << "UNION OF ARRAYS: ";

    for(i=0;i<array3.size();i++)
    {
        cout << array3[i] << " ";
    }

    return 0;
}