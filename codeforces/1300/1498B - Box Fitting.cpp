#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, w;
	cin >> n >> w;

	vector<int> p(31, 0);

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		p[log2(x)]++;
	} 

	int ans = 0;
	while(n > 0){
		long long curr = w;
		
		for(int i = 30; i >= 0; i--) {
			while(p[i] > 0 && (1ll << i) <= curr) {
				curr -= 1ll << i;
				p[i]--;
				n--;
			}
		}
		ans++;
	}
	cout << ans << endl;
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

