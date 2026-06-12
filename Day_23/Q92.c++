#include <iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    int i,j;

    cout << "Enter a string: ";
    getline(cin, word);

    char max = word[0];
    int max_count = 0;

    if(word.length() == 0)
    {
        cout << "String is empty";
    }
    else
    {
        for(i=0;i<word.length();i++)
        {
            int count = 0;

            for(j=0;j<word.length();j++)
            {
                if(word[i] == word[j])
                {
                    count ++;
                }
            }
            if(count > max_count)
            {
                max = word[i];
                max_count = count;
            }
        }
    }
    
    cout << max << " is the maximum ocurring character";

    return 0;
}