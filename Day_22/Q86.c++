#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,words = 0;
    string sentence;

    cout << "Enter string: ";
    getline(cin, sentence);
    

    for(i=0;i<sentence.length();i++)
    {
        if(sentence[i] == ' ')
        {
            words ++;
        }
    }

    cout << "Number of words in sentence: " << sentence << " = " << words + 1;

    return 0;
}