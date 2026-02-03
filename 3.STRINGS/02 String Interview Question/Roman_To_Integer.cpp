#include <iostream>
#include <string>
using namespace std;

// Q1. Roman to Integer
// Convert Roman character into its integer value
int value(char c)
{
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    return 1000; // 'M'
}

int romanToInt(string s)
{
    int sum = 0;

    // check each symbol with next symbol
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
        // if smaller value before bigger value, subtract it
        if (value(s[i]) < value(s[i + 1]))
            sum -= value(s[i]);
        else
            sum += value(s[i]);
    }

    // add last roman character value
    sum += value(s[s.size() - 1]);

    return sum;
}

int main()
{
    string s;
    cout << "Enter Roman number: ";
    cin >> s;

    cout << "Integer value: " << romanToInt(s) << endl;

    return 0;
}
