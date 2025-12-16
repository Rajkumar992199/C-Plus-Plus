#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, k, ans = 0;
	cin >> n >> k;
	k--;
	if(n % 2 == 0) {
		ans = (k % n) + 1;
		if(ans == 0) 
			ans = n;
		cout << ans << endl;
	}
	else {
		long long cross_step = n / 2;
		long long added_steps = k / cross_step;
		ans = ((k + added_steps) % n) + 1;
		cout << ans << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
