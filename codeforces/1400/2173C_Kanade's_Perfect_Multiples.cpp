#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    set<long long> s, ans;
    map<long long, int> mp;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        mp[a[i]]++;
    }
    while(s.size()) {
        auto it = *s.begin();
        for(int j = it; j <= k; j += it) {
            if(mp[j]) 
                s.erase(j);
            else {
                cout << -1 << endl;
                return;
            }
        }
        ans.insert(it);
    }
    cout << ans.size() << endl;
    for(auto it : ans) 
        cout << it << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
