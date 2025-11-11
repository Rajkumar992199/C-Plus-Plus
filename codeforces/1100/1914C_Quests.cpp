#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    int mx = 0, sum = 0, ans = 0;
    for(int i = 0; i < min(n, k); i++) {
        sum += a[i]; // following first completion
        mx = max(mx, b[i]); // what could be the options for repeating with maximum outcome
        ans = max(ans, sum + (k - i - 1) * mx); 
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