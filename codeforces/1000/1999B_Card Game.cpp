#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {
    if (a > b)
        return 1;
    if (a == b)
        return 0;
    if (a < b)
        return -1;
}
void solve() {
    int a1, a2, b1, b2, ans = 0;
    cin >> a1 >> a2 >> b1 >> b2;

    if (f(a1, b1) + f(a2, b2) > 0)
        ans += 1;
    if (f(a1, b2) + f(a2, b1) > 0)
        ans += 1;
    if (f(a2, b1) + f(a1, b2) > 0)
        ans += 1;
    if (f(a2, b2) + f(a1, b1) > 0)
        ans += 1;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}