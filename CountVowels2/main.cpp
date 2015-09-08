#include <iostream>

using namespace std;

int main()
{
    string sentence;

    int numVowels = 0;
    int eVowels = 0;
    int aVowels = 0;
    int iVowels = 0;
    int oVowels = 0;
    int uVowels = 0;

    cout << "Enter a string of characters: ";
    getline(cin, sentence);

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == 'e')
        {
            eVowels++;
        }
        if(sentence[i] == 'a')
        {
            aVowels++;
        }
        if(sentence[i] == 'i')
        {
            iVowels++;
        }
        if(sentence[i] == 'o')
        {
            oVowels++;
        }
        if(sentence[i] == 'u')
        {
            uVowels++;
        }

    }

    numVowels = eVowels + aVowels + iVowels + oVowels + uVowels;

    cout << "There are " << numVowels << " vowels in your string of characters" << endl;
    cout << "e:" << eVowels << endl;
    cout << "a:" << aVowels << endl;
    cout << "i:" << iVowels << endl;
    cout << "o:" << oVowels << endl;
    cout << "u:" << uVowels << endl;

    return 0;
}
