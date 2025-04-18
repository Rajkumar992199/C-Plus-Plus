#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        string s, t, ans = "";
        cin >> s >> t;
        int n = s.size(), m = t.size();
        vector<int> freq_t(26, 0);
        for (int i = 0; i < m; i++) freq_t[t[i] - 'A']++;
        for (int i = n - 1; i >= 0; i--) {
            if (freq_t[s[i] - 'A'] > 0) freq_t[s[i] - 'A']--;
            else s[i] = '.';
        }
        for (int i = 0; i < n; i++) if (s[i] != '.') ans += s[i];
        if (ans == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}