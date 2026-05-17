#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans = 1;
	string s;
	cin >> n >> s;

	for(int i = 0; i < n; i++) {
		if(s[i] == 'R') 
			ans++;
		else {
			cout << ans << endl;
			return;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}