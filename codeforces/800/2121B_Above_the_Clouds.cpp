#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans = 0;
        string s;
        cin >> n >> s;
        map<char, int> m;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
            if (m[s[i]] >= 2 && i != n - 1) {
                ans = 1;
                break;
            }
            if (i != n - 1 && i != 0 && s[i] == s[n - 1]) {
                ans = 1;
                break;
            }
        }
        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}