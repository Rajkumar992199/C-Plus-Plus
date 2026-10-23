#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, ans = 0;
    cin >> n;

    while(n) {
        ans += n;
        n /= 2;
    }
    cout << ans << '\n';
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