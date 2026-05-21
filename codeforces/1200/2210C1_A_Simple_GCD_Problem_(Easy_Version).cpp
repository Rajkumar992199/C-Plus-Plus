#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, ans = 0, temp1, temp2, temp;
	cin >> n;
	vector<long long> a(n), b(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	for(int i = 0; i < n; i++) 
		cin >> b[i];

	ans += (__gcd(a[0], a[1]) != a[0]) + (__gcd(a[n - 2], a[n - 1]) != a[n - 1]);
     
	for(int i = 1; i < n - 1; i++) {
		temp1 = __gcd(a[i - 1], a[i]);
		temp2 = __gcd(a[i], a[i + 1]);
		temp = temp1 * temp2 / __gcd(temp1, temp2);
		if(a[i] > temp) {
			a[i] = temp;
			ans++;
		}
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}