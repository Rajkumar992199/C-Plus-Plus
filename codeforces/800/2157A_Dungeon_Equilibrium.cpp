#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, ans = 0;
    cin >> n;
    set<int> s;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
        s.insert(a);
    }
    for(auto it: s) {
        if(mp[it] > it) ans += mp[it] - it;
        else if(mp[it] < it) ans += mp[it]; 
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
