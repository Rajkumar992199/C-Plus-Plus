#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    map<tuple<int, int, int>, long long> cnt;
    long long ans = 0;

    for (int i = 0; i < n - 2; ++i) {
        int x = a[i], y = a[i + 1], z = a[i + 2];
        auto triplet = make_tuple(x, y, z);

        vector<tuple<int, int, int>> mist = {
            make_tuple(0, y, z),
            make_tuple(x, 0, z),
            make_tuple(x, y, 0)
        };

        for (const auto& trip : mist) {
            ans += cnt[trip] - cnt[triplet];
            cnt[trip]++;
        }
        cnt[triplet]++;
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