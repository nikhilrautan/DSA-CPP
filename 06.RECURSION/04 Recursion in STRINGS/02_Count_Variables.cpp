#include <iostream>
using namespace std;

int countVowels(string str, int index)
{
    if (index == -1)
        return 0;

    char ch = tolower(str[index]);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1 + countVowels(str, index - 1);
    else
        return countVowels(str, index - 1);
}
int main()
{
    string str = "NikhilRautan";

    cout << "Vowels: " << countVowels(str, str.length() - 1);
    return 0;
}
