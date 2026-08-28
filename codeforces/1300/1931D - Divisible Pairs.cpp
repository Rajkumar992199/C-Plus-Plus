#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<pair<int, int>, long long> cnt;
    long long ans = 0;

    for (int it : a) {
        int modx = it % x;
        int mody = it % y;

        ans += cnt[{(x - modx) % x, mody}];
        cnt[{modx, mody}]++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}