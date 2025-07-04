#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, mx, ans = 0;
        cin >> n;
        vector<long long> a(n), pre_sum(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pre_sum[i] += a[i]; //sum of array
            if (i == 0) mx = a[0]; // initializing value of maximum element as a[0]
            else pre_sum[i] += pre_sum[i - 1]; //prefix sum of array
            mx = max(mx, a[i]); // finding maximum element
            if (pre_sum[i] == 2 * mx)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}