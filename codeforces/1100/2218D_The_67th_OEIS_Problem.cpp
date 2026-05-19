#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n + 1), b(n + 1);
	map<long long, long long> mp;
	for(int i = 1; i <= n; i++) {
		a[i] = i * (i + 1);
		if(i > 1) {
			b[i] = __gcd(a[i], a[i - 1]);
			if(mp[b[i]]) {
				a[i] /= 2;
				b[i] = __gcd(a[i], a[i - 1]);
			}
			mp[b[i]]++;
		}
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}