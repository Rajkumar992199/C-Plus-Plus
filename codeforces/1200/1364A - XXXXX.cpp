#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, sum = 0, l = -1, r;
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a % x != 0) {
            if (l == -1)
                l = i; 
            r = i;
        }
        sum += a;
    }

    if (sum % x != 0)
        cout << n << '\n';
    else if (l == -1)
        cout << -1 << '\n';
    else
        cout << n - min(l + 1, n - r) << '\n';
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