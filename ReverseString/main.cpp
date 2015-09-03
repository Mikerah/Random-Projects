#include <iostream>

using namespace std;

int main()
{
    string word;
    string reverseWord;
    cout << "Enter a word and the program will reverse it:";
    cin >> word;

    for(int i = word.length() - 1; i >= 0; i--)
    {
        reverseWord += word[i];
    }
    cout << endl;
    cout << "The reversed word is " << reverseWord;

    return 0;
}
