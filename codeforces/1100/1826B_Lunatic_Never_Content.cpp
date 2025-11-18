#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	long long ans = 0;
	for (int i = 0; i < n / 2; i++) { 
		// value of x for ith element
		long long x = abs(a[i] - a[n - i - 1]);
		// maximum value of x possible for all indexes
		ans = __gcd(ans, x);
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
