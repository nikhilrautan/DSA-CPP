#include <iostream>
using namespace std;

int countConsonants(string str, int index)
{
    if (index == -1)
        return 0;

    char ch = str[index];

    // convert uppercase to lowercase
    if (ch >= 'A' && ch <= 'Z')
        ch = ch - 'A' + 'a';

    // check if alphabet and not vowel
    if ((ch >= 'a' && ch <= 'z') &&
        !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        return 1 + countConsonants(str, index - 1);

    return countConsonants(str, index - 1);
}

int main()
{
    string str = "Nikhil Rautan 123";

    cout << "Consonants: " << countConsonants(str, str.length() - 1);
    return 0;
}
