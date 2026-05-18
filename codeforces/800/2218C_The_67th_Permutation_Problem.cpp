#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		cout << i << " ";
		cout << n - 1 + (2 * i) << " ";
		cout << n + (2 * i) << " ";
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