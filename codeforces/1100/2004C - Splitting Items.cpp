#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k, ans = 0;
    cin >> n >> k;
    
    vector<int> a(n);

    for(int i = 0; i < n; i++) 
       cin >> a[i]; 

    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            ans += a[i];
        else 
            ans -= a[i];
    }

    for(int i = 1; i < n; i += 2) {
        int diff = a[i - 1] - a[i];
        ans -= min(k, diff);
        k -= min(k, diff);
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
