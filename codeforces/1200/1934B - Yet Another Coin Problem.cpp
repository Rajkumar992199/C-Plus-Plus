#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> mp = {0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
    long long n, x, ans = 0, rem;
    cin >> n;
    x = n/15;
    rem = n%15;
    ans += x;
    if(rem == 5 && ans >= 1) 
        ans++;
    else if(rem == 8 && ans >= 1) 
        ans += 2;
    else 
        ans+=mp[rem];
    cout << ans << "\n";
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
