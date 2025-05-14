#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c0 = 0, c1 = 0, f = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                c1++;
                if (i < n - 1 && s[i + 1] == '1') f++;
            }
            else c0++;
        }
        (c1 > c0 || ((s[0] == '1' || s[n - 1] == '1') && f > 0)
            || (s[n - 1] == '1' && s[0] == '1') || f > 1 ? cout << "YES\n" : cout << "NO\n");
        // if number is 11... || ...11 || 1...1 || ...111... || ..11....11.. || 1...11.. || ...11...1 then output will be YES else NO.
    }
    return 0;
}
