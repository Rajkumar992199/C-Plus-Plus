#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<long long>> s(n + 1);
    vector<int> u(n);

    for(int i = 0; i < n; i++)
        cin >> u[i];

    long long x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s[u[i]].push_back(x);
    }

    vector<long long> ans(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        if(s[i].empty())
            continue;

        sort(s[i].rbegin(), s[i].rend());

        int sz = s[i].size();
        vector<long long> pre(sz + 1, 0);
        for(int j = 0; j < sz; j++) 
            pre[j + 1] = pre[j] + s[i][j];

        for (int k = 1; k <= sz; k++) {
            int idx = (sz / k) * k;
            ans[k] += pre[idx];
        }
    }
    
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    
    cout << endl;
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