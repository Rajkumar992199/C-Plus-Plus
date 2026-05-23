#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, ans = 0;
	cin >> n;
	vector<long long> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];

    for(int i = 0; i < n - 1; i++) 
        for(int j = i + 1; j < n; j++)  
            ans = max(ans, a[i] ^ a[j]);
        
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}