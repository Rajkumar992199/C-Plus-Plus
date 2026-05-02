#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long t, h, u, ans = 0;
    cin >> t >> h >> u;
    
    ans += 3 * h + 3 * u; // h & u will take 3 units
    ans += min(t , u); // t will fit 2 blocks in u so 1 more block required
    t -= min(t , u);
    ans += 2 * min(t, h); // t will fit 1 block in H so 2 more blocks required
    t -= min(t , h);
    ans += 2 * min(t, h); // t will fit 1 block in other side of H so 2 more blocks required
    t -= min(t , h);

    if(t) {
        ans += 3; //single T will take 3 blockes
        t--;
        ans += 2 * t; // other T will take 2 blocks
    }

    cout << ans << endl;
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