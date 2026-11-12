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

	sort(cnt.rbegin(), cnt.rend());
	int ans = cnt[0], last = cnt[0];
	for (int i = 1; i <= n; i++) {
		if (last == 0) 
            break;

		if (cnt[i] >= last) {
			ans += last - 1;
			last -= 1;
		} 
        else {
			ans += cnt[i];
			last = cnt[i];
		}
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