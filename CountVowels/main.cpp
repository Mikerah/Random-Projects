#include <iostream>

using namespace std;

int main()
{
    string sentence = "";


    cout << "Enter a sentence or word: ";
    getline(cin,sentence);

    int numVowels = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == 'e' || sentence[i] == 'a' || sentence[i] == 'o' || sentence[i] == 'i' || sentence[i] == 'u')
        {
            cout << sentence[i] << endl;
            numVowels++;
        }
    }

    cout << endl;
    cout << "There is " << numVowels << " vowels in your string of characters.";


    return 0;
}
