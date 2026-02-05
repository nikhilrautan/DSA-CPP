#include <iostream>
#include <string>
using namespace std;

// Q1. Integer to Roman
// We use fixed roman values for:
// ones (1-9), tens (10-90), hundreds (100-900), thousands (1000-3000)

class Solution
{
public:
    string intToRoman(int num)
    {
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string ths[]  = {"", "M", "MM", "MMM"};

        // build answer based on digits position
        return ths[num / 1000] +
               hrns[(num % 1000) / 100] +
               tens[(num % 100) / 10] +
               ones[num % 10];
    }
};

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    Solution sol;
    cout << "Roman: " << sol.intToRoman(num) << endl;

    return 0;
}
