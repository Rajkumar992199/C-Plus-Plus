#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	int m, q;
	cin >> n >> m >> q;

	long long b1, b2, a;
	cin >> b1 >> b2 >> a;

	if(b1 > b2) 
		swap(b1, b2);

	if(a > b2)
		cout << n - b2 << endl;
	else if(a < b1)
		cout << b1 - 1 << endl;
	else 
		cout << abs(b1 - b2) / 2 << endl;
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

