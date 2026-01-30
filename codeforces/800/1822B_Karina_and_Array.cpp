#include <bits/stdc++.h>
using namespace std;             

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	sort(a.begin(), a.end());
    cout << max(a[0] * a[1], a[n - 2] * a[n - 1]) << endl;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
  	    solve();

    return 0;
}