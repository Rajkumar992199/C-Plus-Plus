#include<bits/stdc++.h>
using namespace std;

long long sum(long long x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    long long fc = x + sum(x - 1);
    return fc;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, q, m = 0, ans = 0;
        cin >> n >> k >> q;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= q) m++;
            else {
                ans += sum(m - k + 1);
                m = 0;
            }
            if (i == n - 1) ans += sum(m - k + 1);
        } 
        cout << ans << endl;
    }
    return 0;
}