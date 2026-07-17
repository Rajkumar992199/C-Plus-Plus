#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, c, k;
    cin >> n >> c >> k;
    vector<long long> a(n);
	for(int i = 0; i < n; i ++)
		cin >> a[i];

	sort(a.begin(), a.end());
	for(int i = 0; i < n; i ++){
		if(a[i] > c)
			break;
		int mn = min(k, c-a[i]);
		k -= mn;
		c += a[i] + mn;
	}
	cout << c << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
	int t;
    cin >> t;
	while(t--)
        solve();

    return 0;
}