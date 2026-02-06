#include <iostream>
using namespace std;

void rev(string &str, int start, int end)
{
    if (start >= end)
        return;

    swap(str[start], str[end]);
    rev(str, start + 1, end - 1);
}

int main()
{
    string str = "hello";

    rev(str, 0, str.length() - 1);
    cout << "Reversed: " << str;

    return 0;
}
