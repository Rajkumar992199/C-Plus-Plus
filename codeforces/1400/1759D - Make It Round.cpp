#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    long long x = n, k = 1;

    while (x % 10 == 0) 
        x /= 10;

    while (x % 5 == 0 && k <= m/2) {
        x /= 5;
        k *= 2;
    }

    while (x % 2 == 0 && k <= m/5) {
        x /= 2;
        k *= 5;
    }

    while (k <= m/10) 
        k *= 10;

    k *= m/k;
    cout << n * k << '\n';
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