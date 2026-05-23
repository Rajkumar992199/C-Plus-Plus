#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	int m, q;
	cin >> n >> m >> q;

	vector<long long> a(m);

	for(int i = 0; i < m; i++)
		cin >> a[i];
	sort(a.begin(), a.end());

	for(int i = 0; i < q; i++) {
		long long b;
		cin >> b;
		int idx = upper_bound(a.begin(), a.end(), b) - a.begin(); 

		if (idx == 0) 
			cout << a[0] - 1 << endl;          
		else if (idx == m) 
			cout << n - a[m - 1] << endl; 
		else 
			cout << (a[idx] - a[idx - 1]) / 2 << endl;    
	}

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

