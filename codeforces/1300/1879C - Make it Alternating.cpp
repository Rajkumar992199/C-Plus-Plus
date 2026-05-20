#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s; 

	long long len = 0, ans = 1, cur = 1, mod = 998244353;
	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i] == s[i + 1]) {
			len++;
			cur++;
		}
		else {
			ans = (ans * cur) % mod;
			cur = 1;
		}
	}
	ans = (ans * cur) % mod;

	for (int i = 1; i <= len; i++)
		ans = (ans * i) % mod;

	cout << len << " " << ans << endl;
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

