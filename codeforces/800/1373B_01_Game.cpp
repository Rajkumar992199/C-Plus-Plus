#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int c0 = 0, c1 = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if ( s[i] == '1') c1++;
            else c0++;
        }
        if (min(c0, c1) % 2 == 1) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}