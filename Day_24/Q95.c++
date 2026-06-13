#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    string word = "";
    string longest_word = "";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence += ' ';

    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i] != ' ')
        {
            word += sentence[i];
        }
        else
        {
            if(word > longest_word)
            {
                longest_word = word;
            }
            word = "";
        }
    }

    cout << "Longest word in sentence = " << longest_word;

    return 0;
}