#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string duplicate = "";
    bool condition;

    cout << "Enter string: ";
    getline(cin, word);

    for(int i=0;i<word.length();i++)
    {
        condition = false;

        for(int j=0;j<duplicate.length();j++)
        {
            if(word[i] == duplicate[j])
            {
                condition = true;
                break;
            }
        }
        if(!condition)
        {
            duplicate += word[i];
        }
    }

    cout << "String with no repeated characters: " << duplicate;

    return 0;
}