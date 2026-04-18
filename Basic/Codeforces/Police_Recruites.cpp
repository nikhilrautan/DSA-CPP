#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int police = 0, untreated = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x > 0) {
            police += x;
        } else {
            if(police > 0) police--;
            else untreated++;
        }
    }

    cout << untreated << endl;
}