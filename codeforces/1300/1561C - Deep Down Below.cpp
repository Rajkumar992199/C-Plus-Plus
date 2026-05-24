#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> caves;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;

        int b = 0;

        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;

            b = max(b, x - j);
        }

        caves.push_back({b, k});
    }

    sort(caves.begin(), caves.end());

    int gained = 0;
    int p = 0;

    for(auto [b, k] : caves) {
        p = max(p, b - gained);
        gained += k;
    }

    cout << p + 1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();
}