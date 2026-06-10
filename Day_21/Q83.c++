#include <iostream>
#include <string>
using namespace std;

int main()
{
    int vowels=0,consonants=0;

    string word;

    cout << "Enter string: ";
    cin >> word;
    
    for(int i=0;i<word.length();i++)
    {
        if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            vowels ++;
        }
        else
        {
            consonants ++;
        }
    }

    cout << "Number of vowels in " << word << " = " << vowels << endl;
    cout << "Number of consonants in " << word << " = " << consonants;

    return 0;
}