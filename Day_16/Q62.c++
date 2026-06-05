#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,terms,count,element,max,index;
    
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
    vector<int> duplicate;
    vector<int> Counts;

    for(i=0;i<terms;i++)
    {
        cout << "Enter element at index, " << i << ": ";
        cin >> array[i];
    }

    for(i=0;i<terms;i++)
    {
        element = array[i];
        count = 0;

        for(j=i;j<terms;j++)
        {
            if(array[j] == element)
            {
                count ++;
            }
        }

        if(count > 1)
        {
            duplicate.push_back(array[i]);
            Counts.push_back(count);
        }
    }

    max = Counts[0];
    index = 0;

    for(i=0;i<Counts.size();i++)
    {
        if(Counts[i] > max)
        {
            max = Counts[i];
            index = i;
        }
    }

    cout << "MAX FREQUENCY ELEMENT = " << duplicate[index];

    return 0;
}