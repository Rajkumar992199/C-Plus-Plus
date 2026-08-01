#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for(int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    vector<long long> pre(n+1, 0);
    for(int i = 1; i <= n; i++)
        pre[i] = pre[i-1] + a[i-1];

    long long x;
    for(int i = 0; i < q; i++) {
        cin >> x;
        if(x > pre[n])
            cout << -1 << endl;
        else {
            int ans = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
            cout << ans << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}