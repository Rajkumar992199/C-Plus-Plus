#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k;
    cin >> k;

    long long ans = k + sqrtl(k);
    long long rt = sqrtl(ans);
    while((ans - rt) != k) {
        ans++;
        rt = sqrtl(ans);
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