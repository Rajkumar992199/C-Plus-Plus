#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    // weight of TNT in ith box, prefix sum
    vector<long long> a(n), pre(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }

    long long mn = LLONG_MAX, mx = 0, ans = 0;
    for(int k = 1; k < n; k++) {
        if(n % k != 0) continue; // not valid loading option
        mn = LLONG_MAX, mx = 0;
        for(int i = k; i <= n; i += k) {
            long long temp = pre[i] - pre[i - k];
            mn = min(mn, temp);
            mx = max(mx, temp); 
        }
        ans = max(ans, mx - mn);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}