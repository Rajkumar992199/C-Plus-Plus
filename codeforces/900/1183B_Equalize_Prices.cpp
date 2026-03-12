#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k, mx = INT_MIN, mn = INT_MAX;
	cin >> n >> k;

	vector<long long> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(mx < a[i])
			mx = a[i];
		if(mn > a[i])
			mn = a[i];
	}
	
	int temp = (mx + mn) / 2;
	if(mx - k <= temp && mn + k >= temp) 
		cout << mn + k << endl;
	else 
		cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin >> t;
    while(t--)
	    solve();
	return 0;
}