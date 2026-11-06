#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k;
    unordered_map<long long, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int rem = x % k;
        if(rem)
            cnt[k - rem]++;
    }
        
    long long ans = 0;
    for(auto it : cnt) 
        ans = max(ans, it.first + 1ll*(it.second-1)*k + 1);

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