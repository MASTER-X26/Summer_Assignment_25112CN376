#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1,word2,sum;
    bool condition;

    cout << "Enter a string: ";
    getline(cin, word1);

    cout << "Enter a second string: ";
    getline(cin, word2);

    if(word1.length() != word2.length())
    {
        condition = false;
    }
    else
    {
        sum = word1 + word1;

        for(int i=0;i<sum.length();i++)
        {
            condition = false;

            if(sum.substr(i,word2.length()) == word2)
            {
                condition = true;
                break;
            }
        }

        if(condition == true)
        {
            cout << word2 << " is rotated correctly";
        }
        else
        {
            cout << word2 << " is not rotated correctly";
        }
    }

    return 0;
}