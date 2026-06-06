#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,element,terms1,terms2,terms3;
    bool duplicate;
    
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

    for(i=0;i<terms1;i++)
    {
        element = array1[i];

        for(j=0;j<terms2;j++)
        {
            if(array1[i] == array2[j])
            {
                array3.push_back(element);
            }
        }
    }

    vector<int> temp;

    if(array3.size() == 0)
    {
        cout << "THERE ARE NO COMMON ELEMENTS BETWEEN BOTH ARRAYS";
    }
    else
    {
        for(i=0;i<array3.size();i++)
        {
            duplicate = false;

            for(j=0;j<temp.size();j++)
            {
                if(temp[j] == array3[i])
                {
                    duplicate = true;
                    break;
                }
            }

            if(duplicate == false)
            {
                temp.push_back(array3[i]);
            }
        }

        cout << "COMMOM ELEMENTS FROM BOTH ARRAYS: ";
        for(i=0;i<temp.size();i++)
        {
            cout << temp[i] << " ";
        }
    }

    return 0;
}