#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, m;
    cin >> n >> x >> m;

    int l, r, mn = x, mx = x;

    while(m--) {
        cin >> l >> r;
        if(l <= mx && r >= mn) {
            mn = min(l, mn);
            mx = max(r, mx);
        }
    }

    cout << mx - mn + 1 << '\n';
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