#include <iostream>
#include <vector>
using namespace std;

// Q3. Check if the Sentence Is Pangram
bool checkIfPangram(string sentence)
{
    if (sentence.size() < 26)
        return false;

    vector<bool> alpha(26, false);

    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == false)
            return false;
    }

    return true;
}

int main()
{
    string sentence;
    cout << "Enter sentence (only lowercase letters): ";
    cin >> sentence;

    if (checkIfPangram(sentence))
        cout << "Yes, it is a Pangram ✅" << endl;
    else
        cout << "No, it is NOT a Pangram ❌" << endl;

    return 0;
}
