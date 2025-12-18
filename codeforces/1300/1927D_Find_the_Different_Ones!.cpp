#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n), b(n, -1);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(i && a[i] == a[i - 1]) {
				b[i] = b[i - 1];
				break;
			}
			if(a[i] != a[j]) {
				b[i] = j + 1;
				break;
			}
		}
		if(b[i] == -1) 
			break;
	}
	int q, l, r;
	cin >> q;
	for(int i = 0; i < q; i++) {
		cin >> l >> r;
		if(b[l - 1] != -1 && b[l - 1] <= r)
			cout << l << " " << b[l - 1] << endl;
		else 
			cout << -1 << " " << -1 << endl;
	}
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
