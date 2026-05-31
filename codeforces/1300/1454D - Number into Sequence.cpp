#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<pair<int, long long>> val;
	for (long long i = 2; i * i <= n; ++i) {
		int cnt = 0;
		while (n % i == 0) {
			cnt++;
			n /= i;
		}
		if (cnt > 0) 
			val.push_back({cnt, i});
	}
	if (n > 1) 
		val.push_back({1, n});

    sort(val.rbegin(), val.rend());
    long long m = val.size(), last = val[0].second;
    for(int i = 1; i < m; i++) {
        int cnt = val[i].first;
        for(int j = 0; j < cnt; j++) 
            last *= val[i].second;
    }
    int cnt = val[0].first;
    cout << cnt << endl;
    for(int i = 0; i < cnt - 1; i++) 
        cout << val[0].second << " ";
    cout << last << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}