#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') c1++;
            else if (s[i] == 'B') c2++;
            else c3++;
        }
        if (c2 == (c1 + c3)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}