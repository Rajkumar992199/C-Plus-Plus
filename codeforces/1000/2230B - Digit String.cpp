#include <bits/stdc++.h>
using namespace std;
#define mod 998244353;

void solve() {
    string s;
	cin >> s;
	bool odd = false;
	int ans = 0;
	for(int i = 0; i < s.size(); i++) {
		int x = s[i] - '0';
		if(x == 4)
			ans++;
		else if(odd && x == 2)
			ans++;
		else if(x % 2)
			odd = true;
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