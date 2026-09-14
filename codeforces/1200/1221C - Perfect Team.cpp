#include <bits/stdc++.h>
using namespace std;

void solve() {
    int c, m, x;
    cin >> c >> m >> x;

    cout << min({c, m, (c + m + x) / 3}) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) 
        solve();

    return 0;
}