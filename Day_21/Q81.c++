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
        count ++;
    }

    cout << "Length of string " << word << " = " << count;

    return 0;
}