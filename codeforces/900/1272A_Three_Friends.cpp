#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; // positions
    cin >> a >> b >> c;
    int dis = abs(a - b) + abs(b - c) + abs(c - a); // total distance
    cout << max(0, dis - 4) << endl; // in 1 move they can move max 4
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; // test cases
    cin >> t;
    while (t--)
        solve();
    return 0;
}