#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n, k, ans = 0;
	cin >> n >> k;
	while(n) {
		if(n % k == 0) {
			ans++;
			n /= k;
		}
		else {
			ans += n % k;
			n -= n % k;
		}
	}
	cout << ans << endl;
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