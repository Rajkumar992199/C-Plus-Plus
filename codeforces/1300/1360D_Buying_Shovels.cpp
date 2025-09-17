#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = n;
        for (long long i = 1; i * i <= n; i++) {
            if (n <= k) {
                ans = 1;
                break;
            }
			if (n % i == 0) {
				if (i <= k) 
					ans = min(ans, n / i);
				if (n / i <= k) 
					ans = min(ans, i);
			}
		}
        cout << ans << endl;
    }
    return 0;
}