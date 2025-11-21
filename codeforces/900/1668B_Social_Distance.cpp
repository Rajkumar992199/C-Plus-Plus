#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    long long sum = 0, mx = INT_MIN, mn = INT_MAX;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    /*
        total seats for seating of n person = n
        total empty seats require = sum - mn + mx
        as minimum empty seats required between a[i] & a[i + 1] = max(a[i], a[i + 1])
        so mn will not come even once, and mx will come twice 
    */ 
    (n + sum - mn + mx <= m) ? cout << "YES\n" : cout << "NO\n";  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}
