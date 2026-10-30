#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;

    vector<int> cnt(n+1, 0);
    long long ans = 0;
    
    for(int i = 1; i <= n; i++) {
        cin >> x;
        cnt[i] = cnt[i-1];
        if(x < i) {
            cnt[i]++;
            ans += cnt[max(x-1, 0)];
        }
    }
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