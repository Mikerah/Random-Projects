#include <iostream>
#include <vector>

using namespace std;

bool findSubString(string s1, string s2);

int main()
{
    char vowels[5] = {'e', 'a','i','u','0'};
    string word;



    cout << "Enter a word and this program will output the pig latin version of it: ";
    cin >> word;

    char firstChar = tolower(word[0]);
    string firstCharStr = word.substr(0,1);

    if(firstChar == 'e' || firstChar == 'a' || firstChar == 'i' || firstChar == 'u' || firstChar == 'o')
    {
        word.insert(word.length(),"yay");
        cout << word;
    }
    else
    {
        word.append(firstCharStr);
        word.append("ay");
        word.erase(0,1);
        cout << word;
    }


//    for (int i = 0; i < sizeof(vowels); i++)
//    {
//        if (vowels[i] == firstCharStr)
//        {
//            word.insert(word.length(),"yay");
//            cout << word;
//            break;
//        }
//
//        word.append(firstCharStr);
//        word.append("ay");
//        word.erase(0,1);
//        cout << word;
//        break;
//    }


    return 0;
}
