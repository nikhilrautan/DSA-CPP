#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Smallest distinct window
// Find length of the smallest substring which contains all distinct characters of the string
int findSubString(string str)
{
    vector<int> count(256, 0);
    int first = 0, second = 0;
    int len = str.size();
    int diff = 0;

    // Step 1: count total distinct characters in whole string
    while (first < (int)str.size())
    {
        if (count[str[first]] == 0)
            diff++;
        count[str[first]]++;
        first++;
    }

    // Step 2: reset count array for sliding window
    fill(count.begin(), count.end(), 0);
    first = 0;

    // Step 3: sliding window
    while (second < (int)str.size())
    {
        // expand window until all distinct characters included
        while (diff && second < (int)str.size())
        {
            if (count[str[second]] == 0)
                diff--;

            count[str[second]]++;
            second++;
        }

        // update answer length
        len = min(len, second - first);

        // shrink window from left
        while (diff != 1)
        {
            len = min(len, second - first);

            count[str[first]]--;

            // if a unique char removed completely, window becomes invalid
            if (count[str[first]] == 0)
                diff++;

            first++;
        }
    }

    return len;
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    cout << "Smallest distinct window length: " << findSubString(str) << endl;

    return 0;
}
