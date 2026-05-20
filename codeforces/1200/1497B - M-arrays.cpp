#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, ans = 0;
    cin >> n >> m;

    vector<long long> a(n), cnt(m);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i] % m]++;
    }

    for(int i = 0; i < m; i++) {
        int x = cnt[i], y = cnt[(m - i) % m];
            if(!x && !y)
                continue;
            int mn = min(x, y);

            x -= min(x, mn + 1);
            y -= min(y, mn + 1);
            ans += x + y + 1;

            cnt[i] = 0;
            cnt[(m - i) % m] = 0;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}