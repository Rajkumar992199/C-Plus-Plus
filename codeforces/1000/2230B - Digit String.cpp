#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
	cin >> s;
	int ans = 0, cnt1 = 0, cnt2 = 0, n = s.size();
	for(int i = 0; i < n; i++) 
		if(s[i] == '1' || s[i] == '3') 
			cnt1++;
	ans = cnt1;

	for(int i = 0; i < n; i++) {
		if(s[i] == '2')
			cnt2++;
		if(s[i] == '1' || s[i] == '3') 
			cnt1--;
		ans = max(ans, cnt1 + cnt2);
	}
	cout << n - ans << endl;
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