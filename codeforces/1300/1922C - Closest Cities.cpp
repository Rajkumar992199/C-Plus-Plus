#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), pre(n), post(n);
    
    pre[0] = 0, pre[1] = 1;
    cin >> a[0] >> a[1];
    for(int i = 2; i < n; i++) {
        cin >> a[i];
        pre[i] = pre[i-1];
        if(a[i]-a[i-1] > a[i-1]-a[i-2])
            pre[i] += a[i]-a[i-1];
        else
            pre[i]++;
    }
    
    post[n-1] = 0, post[n-2] = 1;
    for(int i = n-2; i > 0; i--) {
        post[i-1] = post[i];
        if(a[i+1]-a[i] < a[i]-a[i-1])
            post[i-1] += a[i]-a[i-1];
        else
            post[i-1]++; 
    }

    int m;
    cin >> m;
    while(m--) {
        int x, y;
        cin >> x >> y;
        if(x < y)
            cout << pre[y-1] - pre[x-1] << endl;
        else
            cout << post[y-1] - post[x-1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) 
        solve();

    return 0;
}