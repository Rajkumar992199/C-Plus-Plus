#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    int f1 = min (k / x, n);
    cout << 1ll * f1 * (f1 - 1) / 2 + 1ll * (n - f1) * f1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}
