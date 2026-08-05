#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, mx = -1, mn = INT_MAX, x;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    long long sum = -1;
    bool invalid = false;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x != -1) {
            if(sum == -1)
                sum = x + a[i];
            else if(sum != x + a[i]) 
                invalid = true;
            if(sum < mx || sum - mn > k)
                invalid = true;
        }
    }

    if(invalid)
        cout << 0 << '\n';
    else if(sum == -1)
        cout << max(0, k - (mx - mn - 1)) << '\n';
    else
        cout << 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}