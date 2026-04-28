#include <bits/stdc++.h>
using namespace std;

long long lcm(long long x,long long y){
    return x / __gcd(x,y) * y;
}

void solve() {
    long long a, b, c, n;
    cin >> a >> b >> c >> n;

    long long ab = lcm(a,b), bc = lcm(b,c), ac = lcm(a,c), abc = lcm(a,bc);
    long long all3 = (n / abc), ab2 = (n / ab), ac2 = (n / ac), bc2 = (n / bc);

    // all 3 together + only 2 together + only 1 at a time
    long long ans = 2 * all3 + 3 * max(0ll, ac2 + ab2 - 2 * all3) + 6 * max(0ll, (n / a) - ac2 - ab2 + all3);
    long long bns = 2 * all3 + 3 * max(0ll, bc2 + ab2 - 2 * all3) + 6 * max(0ll, (n / b) - bc2 - ab2 + all3);
    long long cns = 2 * all3 + 3 * max(0ll, bc2 + ac2 - 2 * all3) + 6 * max(0ll, (n / c) - bc2 - ac2 + all3);
    
    cout << ans << " " << bns << " " << cns << endl;
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