#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,count=0,count1=0,element,max,index;
    
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
    vector<int> temp;

    for(i=0;i<terms;i++)
    {
        cout << "Enter element at index, " << i << ": ";
        cin >> array[i];
    }

    for(i=0;i<terms;i++)
    {
        element = array[i];
        count = 0;

        for(j=0;j<terms;j++)
        {
            if(array[j] == element)
            {
                count ++;
            }
        }

        if(count < 2)
        {
            temp.push_back(array[i]);
            count1 ++;
        }
        else
        {
            continue;
        }
    }

    cout << "ARRAY WITH DUPLICATED ELEMENTS DELETED = ";

    for(i=0;i<count1;i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}