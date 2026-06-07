#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;

    int diff = n - k, x = 0;
    cout << 1 << " " << 2 << " ";
    for(int i = 3; i <= k; i++) {
        int a;
        x += min(i - 2, diff);
        a = i + x;
        diff -= min(i - 2, diff);
        cout << a << " ";
    }
    cout << endl;
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