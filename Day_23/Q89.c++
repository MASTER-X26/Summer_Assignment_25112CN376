#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j;
    string word;

    cout << "Enter string: ";
    getline(cin, word);

    for(i=0;i<word.length();i++)
    {
        bool repeat = false;

        for(j=0;j<word.length();j++)
        {
            if(word[j] == word[i] && i!=j)
            {
                repeat = true;
                break;
            }
        }
        if(!repeat)
        {
            cout << word[i] << " is the first non repeated character";
            break;
        }
    }
    
    return 0;
}