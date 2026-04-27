#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<vector<long long>> v(n);
    vector<long long> a(3);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) 
            cin >> a[j];
        v[i] = a;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) 
        if(v[i][0] <= k && v[i][1] >= k)
            k = max(k, v[i][2]);
        
    cout << k << endl;
}    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}