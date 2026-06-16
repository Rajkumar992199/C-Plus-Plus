#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
	cin >> n;
    vector<long double> c(n + 1), p(n + 1);
	for(int i = 1; i <= n; i++){
		int ci, pi;
		cin >> ci >> pi;
		c[i] = ci, p[i] = pi / 100.0;
	}
	long double ans = 0;
	for(int i = n; i >= 1; i--)
		ans = max(ans, ans * (1 - p[i]) + c[i]);

	cout << fixed << setprecision(10) << ans << endl;
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