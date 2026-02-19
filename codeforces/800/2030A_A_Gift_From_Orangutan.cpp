#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, mx = 0, mi = 1001;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        mi = min(mi, x);
        mx = max(mx, x);
    }
    cout << (mx - mi) * (n - 1) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}