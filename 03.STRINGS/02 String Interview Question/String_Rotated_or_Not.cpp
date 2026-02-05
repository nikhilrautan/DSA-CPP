#include <iostream>
using namespace std;

// Rotate clockwise by 1 position
void rotateCw(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

// Rotate anti-clockwise by 1 position
void rotateAcw(string &s)
{
    char c = s[0];
    int index = 1;

    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

// Check if str2 is rotated by 2 places from str1
bool isRotated(string str1, string str2)
{
    if (str1.size() != str2.size())
        return false;

    string cw = str1, acw = str1;

    // rotate clockwise twice
    rotateCw(cw);
    rotateCw(cw);

    if (cw == str2)
        return true;

    // rotate anti-clockwise twice
    rotateAcw(acw);
    rotateAcw(acw);

    if (acw == str2)
        return true;

    return false;
}

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isRotated(str1, str2))
        cout << "Yes, string is rotated by 2 places." << endl;
    else
        cout << "No, string is NOT rotated by 2 places." << endl;

    return 0;
}
