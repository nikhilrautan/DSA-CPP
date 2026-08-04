#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void rev(string& str, int start, int end) {
        if (start >= end) return;
        char c = str[start];
        str[start] = str[end];
        str[end] = c;
        rev(str, start + 1, end - 1);
    }

    string reverseString(string& s) {
        rev(s, 0, s.length() - 1);
        return s;
    }
};

int main() {
    Solution sol;
    string s;
    
    cout << "Enter a string: ";
    getline(cin, s);
    
    string result = sol.reverseString(s);
    cout << "Reversed string: " << result << endl;
    
    return 0;
}