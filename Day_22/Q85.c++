#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    bool reverse;

    cout << "Enter string: ";
    getline(cin, word);
    
    for(int i=0;i<word.length()/2;i++)
    {
        reverse = false;

        if(word[i] == word[word.length()-i-1])
        {
            reverse = true;
        }
    }

    if(reverse == true)
    {
        cout << word << " is a palindrome string";
    }
    else
    {
        cout << word << " is not a palindrome string";
    }

    return 0;
}