#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st; 

    // ye loop tb tk chlega jb tk wo poori sting ko insert na krde
    for(char c : s) {
        st.insert(c);
    }

    if(st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}