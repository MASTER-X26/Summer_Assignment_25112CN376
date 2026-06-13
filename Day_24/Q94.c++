#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word,compress = "";

    cout << "Enter string: ";
    getline(cin, word);

    word += " ";
    
    for(int i=0;i<word.length();i++)
    {
        int count = 0;

        for(int j=i;j<word.length();j++)
        {
            if(word[i] == word[j])
            {
                count ++;
            }
            else
            {
                compress += word[i];
                compress += to_string(count);
                i += count-1;
                break;
            }
        }
    }
    cout << compress;

    return 0;
}