#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,count = 0;
    string word;

    cout << "Enter string: ";
    cin >> word;
    
    for(i=0;i<word.length();i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 32;
        }
    }

    for(i=0;i<word.length();i++)
    {
        cout << word[i];
    }

    return 0;
}