#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int ans = a1;
    if(a1) {
        int mn = min(a2, a3);
        ans += 2 * mn;
        a2 -= mn;
        a3 -= mn;
    }
    ans += min(a1 + 1, a2+a3+a4);
    cout << ans << endl;
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