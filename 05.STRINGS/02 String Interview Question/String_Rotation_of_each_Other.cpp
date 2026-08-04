#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areRotations(string s1, string s2) {
        if (s1.size() != s2.size()) return false;
        
        string combined = s1 + s1; // agr wo uska substring hai to pkka present krega idhr
        size_t pos = combined.find(s2); // Search for s2 inside combined
        return pos < combined.size(); // Check if pos is a valid index, agr valid index hai to return true, vrna false
    }
};

int main() {
    Solution sol;
    string s1, s2;
    
    cout << "Enter first string: ";
    getline(cin, s1);
    
    cout << "Enter second string: ";
    getline(cin, s2);
    
    bool result = sol.areRotations(s1, s2);
    
    if (result)
        cout << s2 << " is a rotation of " << s1 << endl;
    else
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    
    return 0;
}