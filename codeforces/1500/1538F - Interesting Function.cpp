#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
	cin >> l >> r;

	long long ans = 0, div = 1;
	while(r/div) {
		ans += (r/div)-(l/div);
		div *= 10;
	}
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