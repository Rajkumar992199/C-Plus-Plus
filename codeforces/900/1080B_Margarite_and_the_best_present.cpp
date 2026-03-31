#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, mx = INT_MIN, mx2 = INT_MIN;
	cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] >= mx) {
			mx2 = mx;
			mx = a[i];
		}
		else if(a[i] > mx2)
			mx2 = a[i];
	}
	
	cout << min(mx2 - 1, n - 2) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}