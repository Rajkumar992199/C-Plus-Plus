#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    vector<long long> a(m);
    for (int i = 0; i < m; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());
    long long ans = 0;

    for (long long k = 1; k < n; k++) {
        long long x = m - (lower_bound(a.begin(), a.end(), k) - a.begin());
        long long y = m - (lower_bound(a.begin(), a.end(), n - k) - a.begin());
        ans += x * y - min(x, y);
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