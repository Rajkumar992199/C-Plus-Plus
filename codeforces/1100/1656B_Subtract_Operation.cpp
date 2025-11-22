#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<long long> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a.begin(), a.end());

	long long ans = 0;
	if(n == 1) 
		ans = (a[0] == k);
    else {
		sort(a.begin(), a.end());
    	int i = 0;
    	int j = 1;
		while(j < n && i < n) {
    		if(a[i] + k == a[j]) {
    			ans = true;
    			break;
			}
    		else if(a[i] + k < a[j]) i++;
    		else j++;
    	}
	}
    	cout << (ans? "YES" : "NO") << '\n'; 
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) 
		solve();
}
