#include <iostream>
using namespace std;

bool checkPal(string str, int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;

    return checkPal(str, start + 1, end - 1);
}

int main()
{
    string str = "madam";

    if (checkPal(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
