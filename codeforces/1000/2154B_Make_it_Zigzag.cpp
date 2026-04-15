#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) 
        cin >> x;

    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
        pre[i] = max(pre[i - 1], a[i]);

    long long ans = 0;
    for (int i = 0; i < n; i += 2){
        int dif = -1;
        if (i > 0)
            dif = max(dif, a[i] - pre[i - 1]);

        if (i < n - 1)
            dif = max(dif, a[i] - pre[i + 1]);

        ans += dif + 1;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
}