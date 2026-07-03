#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 1;
    cin >> n;
    vector<long long> a(n);
    cin >> a[0];
    long long mn = a[0], mx = a[0];
    
    for(int i = 1; i < n; i++) {
        cin >> a[i];    
        if(a[i] - a[i - 1] <= 1 && a[i] > mn && a[i] <= mx + 1)
            mx = max(mx, a[i]);
        else {
            ans++; 
            mn = a[i];
            mx = a[i];
        }
    }

    cout << ans << endl;
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
