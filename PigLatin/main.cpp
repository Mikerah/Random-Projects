#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string vowels = "eaiou";
    string word;

    cout << "Enter a word and this program will output the pig latin version of it: ";
    cin >> word;

    string firstChar = word.substr(0,1);

    if(vowels.find(firstChar) || firstChar == "e")
    {
        word.insert(word.length(),"yay");
        cout << word;
    }
    else
    {
        word.append(firstChar);
        word.append("ay");
        word.erase(0,1);
        cout << word;
    }


    return 0;
}
