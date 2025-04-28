#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, ans = LLONG_MAX;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<long long> w(n + 1, 0); // prefix sum of whites
        for (long long i = 0; i < n; i++) w[i + 1] = w[i] + (s[i] == 'W');
        for (long long i = 0; i <= n - k; i++) {
            long long diff = w[i + k] - w[i]; // whites in substring [i, i + k]
            ans = min(ans, diff);
        }
        cout << ans << endl;
    }
    return 0;
}
