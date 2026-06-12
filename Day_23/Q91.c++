#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int i,j;
    bool repeat;
    string word1,word2,temp1,temp2;

    cout << "Enter first string: ";
    getline(cin, word1);
    temp1 = word1;

    cout << "Enter second string: ";
    getline(cin, word2);
    temp2 = word2;

    if(word1.length() != word2.length())
    {
        return 0;
    }
    else
    {
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());

        if(word1 == word2)
        {
            cout << temp1 << " and " << temp2 << " are anagram strings";
        }
        else
        {
            cout << temp1 << " and " << temp2 << " are not anagram strings";
        }
    }

    return 0;
}