#include <iostream>

using namespace std;

int main()
{
    string sentence;
    int numOfSpace;
    char spaceChar = ' ';

    cout << "Enter a string of characters: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == spaceChar)
        {
            numOfSpace++;
        }
    }

    cout << "There are " << numOfSpace+1 << " words in your string.";

    return 0;
}
