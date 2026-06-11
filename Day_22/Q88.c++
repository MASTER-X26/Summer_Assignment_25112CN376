#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word,temp;
    bool reverse;

    cout << "Enter string: ";
    getline(cin, word);
    
    for(int i=0;i<word.length();i++)
    {
        if(word[i] == ' ')
        {
            continue;
        }
        else
        {
            temp += + word[i];
        }
    }

    cout << "New string with no spaces: " << temp;

    return 0;
}