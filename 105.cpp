#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sen;
    char word;

    cout << "enter the sentence: ";
    getline(cin, sen);

    for(char word : sen)
    {
        if(word == ' ')
        {
            cout << word << ": the char is space" << endl;
        }
        else if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' || 
                word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U')
        {
            cout << word << ": the char is vowel" << endl;
        }
        else
        {
            cout << word << ": the char is consonant" << endl;
        }
    }

    return 0;
}
