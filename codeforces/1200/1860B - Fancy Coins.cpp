#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    int needk = m / k, need1 = m % k, ans = 0;
    needk -= min(ak, needk);
    
    if(a1 > need1) 
        a1 -= need1;
    else {
        ans = need1 - a1;
        a1 = 0;
    }
    
    if(needk) 
        ans += max(0, needk - (a1/k));

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}