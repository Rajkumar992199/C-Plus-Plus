#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
	cin >> n;
	vector<int> cnt(n+1);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}

	int ans = 0;
	for (int sum = 2; sum <= 2*n; sum++) {
		int cur = 0;
		for (int i = 1; i < (sum+1)/2; i++) {
			if (sum-i > n) 
                continue;
			cur += min(cnt[i], cnt[sum-i]);
		}
		if (sum % 2 == 0) 
            cur += cnt[sum/2] / 2;
		ans = max(ans, cur);
	}
	cout << ans << endl;
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