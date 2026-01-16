#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, mn = LLONG_MAX, mx = LLONG_MIN;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    cin >> x;
    if(mx >= x && mn <= x) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}