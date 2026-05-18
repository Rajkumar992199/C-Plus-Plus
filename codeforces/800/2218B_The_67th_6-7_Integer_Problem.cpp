#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> a(7);
	int mx = INT_MIN, sum = 0;

	for(int i = 0; i < 7; i++) {
		cin >> a[i];
		sum += a[i];
		if(mx < a[i])
			mx = a[i];
	}

	cout << 2 * mx - sum << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}