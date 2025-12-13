#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, idx;
    cin >> n;
    vector<long long> a(n);
    vector<pair<int, int>> ans;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i && a[i] != a[0]) {
            ans.push_back({1, i + 1});
            idx = i + 1;
        } 
    }
    if(ans.size() == 0) 
        cout << "NO\n";
    else {
        for(int i = 1; i < n; i++) {
            if(a[i] == a[0]) 
                ans.push_back({i + 1, idx});
        }
        cout << "YES\n";
        for(int i = 0; i < n - 1; i++) 
            cout << ans[i].first << " " << ans[i].second << endl;
    }
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
