#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
	cin >> n;

	vector<int> a(n);
    vector<bool> cnt(n + 1);
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	for (int l = 0; l < n; l++) {
		int sum = a[l];
		for (int r = l+1; r < n; r++) {
			sum += a[r];
            
			if (sum <= n) 
                cnt[sum] = true;
            else
                break;
		}
	}

    for(auto it : a) {
        if(cnt[it])
            ans++;
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