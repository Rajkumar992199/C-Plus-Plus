#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans, mod = 1000000007;
        cin >> n;
        ans = ((((n * (n + 1) % mod) * ((4 * n - 1) % mod)) % mod) * 337) % mod;
        cout << ans << endl;
    }
}