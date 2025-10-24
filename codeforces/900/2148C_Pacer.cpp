#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int ans = m, y = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int x = (a + b) % 2;
        if (y != x)
            ans--;
        y = x;
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
