#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, ans = 0;
    string s;
    cin >> n >> k >> s;

    vector<int> up(26, 0), low(26, 0);

    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a') 
            low[s[i] - 'a']++;
        else
            up[s[i] - 'A']++;
    }

    for(int i = 0; i < 26; i++) {
        int u = up[i], l = low[i];
        int mn = min(up[i], low[i]), op = 0;

        ans += mn; // pairs without operation
        op = min(k, (u + l - 2 * mn) / 2);
        ans += op; // pairs added after operation
        k -= op;
    }

    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}