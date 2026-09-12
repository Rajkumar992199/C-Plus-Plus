#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if(n%2) 
        cout << 1 << ' ' << n/2 << ' ' << n/2 << '\n';
    else if(n%4 || n == 4)
        cout << 2 << ' ' << n/2 - 1 << ' ' << n/2 - 1 << '\n';
    else 
        cout << n/4 << ' ' << n/4 << ' ' << n/2 << '\n';
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