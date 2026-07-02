#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    long long h;
    cin >> n >> m >> h;
    vector<long long> a(n), ans(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    ans = a;
    int idx = -1, b;
    long long c;
    vector<int> op(n, -1);
    for(int i = 0; i < m; i++) {
        cin >> b >> c;
        if(op[b - 1] > idx)
            ans[b - 1] += c;
        else
            ans[b - 1] = a[b - 1] + c;

        if(ans[b - 1] > h)
            idx = i;
        op[b - 1] = i;
    }


    for(int i = 0; i < n; i++) {
        if(op[i] > idx)
            cout << ans[i] << " ";
        else
            cout << a[i] << " "; 
    }
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
