#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) 
		cin >> b[i];
	sort(b.rbegin(), b.rend());

	long long ans = 1;
	for (int i = 0; i < n; i++) { 
		// Find the number of elements in a that are greater than b[i]
		long long temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
		long long count = a.size() - temp;

		// Update the answer with the number of valid positions for a[i]
		ans = ans * max(count - i, 0LL) % MOD;
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
