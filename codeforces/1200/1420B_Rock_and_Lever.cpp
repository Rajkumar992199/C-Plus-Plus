#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, ans = 0;
    cin >> n;

    map<long long, long long> mp;

    for(int i = 0; i < n; i++) {
        cin >> x;
        mp[log2(x)]++; // msb bit counts
    }
    
    for(auto it : mp) 
        ans += (it.second * (it.second - 1)) / 2;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
        solve();
    
    return 0;
}