#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, f, a, b;
	cin >> n >> f >> a >> b;
	vector<long long> m(n + 1, 0);
	for(int i = 1; i <= n; i++) {
		cin >> m[i];
		f -= min(a * (m[i] - m[i - 1]), b);
	} 
	if(f > 0) 
		cout << "YES\n";
	else 
		cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
