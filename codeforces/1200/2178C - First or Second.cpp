#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long a, ng = 0;
    vector<long long> pre(n+1, 0), neg(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> a;
        pre[i] = pre[i-1] + a;
        if(a < 0 && i > 1)
            ng += a;
        neg[i] = ng;
    }
    long long ans = LLONG_MIN;
    for(int i = 1; i <= n; i++) 
        ans = max(ans, pre[i] + pre[i-1] - pre[n] - 2*neg[i-1]);
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