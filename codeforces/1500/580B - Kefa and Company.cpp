#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> fr;

    for(int i = 0; i < n; i++) {
        int m, s;
        cin >> m >> s;
        fr.push_back({m, s});
    }

    sort(fr.begin(), fr.end());

    long long mx = 0, ans = 0;
    int mn = 0;
    for(int i = 0; i < n; i++) {
        ans += fr[i].second;
        while(fr[i].first - fr[mn].first >= d) {
            ans -= fr[mn].second;
            mn++;
        }
        mx = max(ans, mx);
    }
    cout << mx << '\n';

    return 0;
}