#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    long long ans = 0, pre = 0;

    unordered_map<long long, long long> cnt;
    cnt[0] = 1; // pref[0] - 0 = 0

    for (int i = 1; i <= n; i++) {
        pre += (s[i - 1] - '0');
        long long val = pre - i;
        ans += cnt[val];
        cnt[val]++;
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
