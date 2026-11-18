#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;

	vector<int> s(n+1), f(n+1);
	for(int i = 1; i <= n; i++)
		cin >> s[i];

	for(int i = 1; i <= n; i++)
		f[i] = 1;

	for(int i = 1; i <= n; i++) 
		for(int j = i*2; j <= n; j += i)
			if(s[i] < s[j])
				f[j] = max(f[j], f[i]+1);

	int ans = 0;
	for(int i = 1; i <= n; i++)
		ans = max(ans, f[i]);

	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}