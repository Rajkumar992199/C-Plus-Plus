#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;
        long long a[n], b[n], mn = 5, count = 0;
        long long ans = p;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > p) b[i] = p;
        }
        map<long long, long long> mp;
        for (int i = 0; i < n; i++) mp[b[i]] += a[i];
        int i = 0;
        for (auto& it : mp) {
            if (n > 1) {
                if (n - it.second > 0) {
                    n -= it.second;
                    ans += it.second * it.first;
                }
                else {
                    ans += ((n - 1) * it.first);
                    n = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}