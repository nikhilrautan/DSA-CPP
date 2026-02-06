#include <iostream>
using namespace std;

void lowerToUpper(string &str, int index)
{
    if (index == -1)
        return;

    if (str[index] >= 'a' && str[index] <= 'z')
        str[index] = 'A' + str[index] - 'a';

    lowerToUpper(str, index - 1);
}

int main()
{
    string str = "nikhilRautan123";

    lowerToUpper(str, str.length() - 1);
    cout << str;

    return 0;
}
