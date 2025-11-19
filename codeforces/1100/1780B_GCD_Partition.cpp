#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n), pre(n + 1, 0);

	long long ans = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		// prefix sum
		pre[i + 1] = pre[i] + a[i];
	}

	for(int i = 1; i < n; i++) {
		// possible gcd for different partition
		long long gcd = __gcd(pre[i], pre[n]);
		// maximum possible gcd
		ans = max(gcd, ans);
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) 
		solve();
}
