#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j,k,count = 0;
    bool duplicate;
    string word;

    cout << "Enter string: ";
    getline(cin, word);
    
    for(i=0;i<word.length();i++)
    {
        duplicate = false;

        for(j=0;j<i;j++)
        {
            if(word[i] == word[j])
            {
                duplicate = true;
                break;
            }
        }
        
        if(!duplicate)
        {
            count = 0;
            for(k=0;k<word.length();k++)
            {
                if(word[i] == word[k])
                {
                    count ++;
                }
            }
            cout << "Frequency of " << word[i] << " = " << count << endl;
        }
    }

    return 0;
}