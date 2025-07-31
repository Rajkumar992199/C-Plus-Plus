#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    long long l, r, x;
    cin >> l >> r >> x;
    long long ans = r / x + r % x;
    long long m = (r / x) * x - 1;
    if (m >= l) 
        ans = max(ans, m / x + m % x);
    cout << ans << endl;
    }
    return 0;
}
