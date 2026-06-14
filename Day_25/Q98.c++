#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1,word2;
    string duplicate = "";
    bool condition;

    cout << "Enter first string: ";
    getline(cin, word1);

    cout << "Enter second string: ";
    getline(cin, word2);

    for(int i=0;i<word1.length();i++)
    {
        condition = true;

        for(int j=0;j<word2.length();j++)
        {
            if(word1[i] == word2[j] && word1[i] != ' ' && word2[j] != ' ')
            {
                condition = false;
                break;
            }
        }
        if(!condition)
        {
            duplicate += word1[i];
            duplicate += " ";
        }
    }

    cout << "Repeated characters between 2 strings: " << duplicate;

    return 0;
}