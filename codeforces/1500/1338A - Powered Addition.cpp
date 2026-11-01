#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, mx = INT_MIN; 
    cin >> n;

    vector<int> a(n);
    long long diff = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        diff = max(diff, 1LL*mx - a[i]);
    }

    int ans = 0;
    if(diff)
        ans = log2(diff)+1;
    
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