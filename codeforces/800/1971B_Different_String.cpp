#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool ans = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i - 1] != s[i]) {
                swap(s[i - 1], s[i]);
                ans = true;
                break;
            }
        }
        if (ans) cout << "YES\n" << s << endl;
        else cout << "NO\n";
    }
}