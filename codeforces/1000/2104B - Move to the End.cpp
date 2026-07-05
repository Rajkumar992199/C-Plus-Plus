#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    vector<long long> pref_max(n + 1, 0), suf_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref_max[i] = max(pref_max[i - 1], a[i - 1]);
        suf_sum[i] = suf_sum[i - 1] + a[n - i];
    }

    for (int k = 1; k <= n; k++) 
        cout << max(suf_sum[k], suf_sum[k - 1] + pref_max[n - k + 1]) << " ";
    cout << endl;
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