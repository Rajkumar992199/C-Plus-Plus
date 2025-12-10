#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    vector<pair<long long, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            long long mult = a[i].first * a[j].first;
            long long sum = a[i].second + a[j].second;
            if(mult > 2 * n) 
                break;
            if(mult == sum)
                ans++;
        }
    }
    cout << ans << endl;
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
