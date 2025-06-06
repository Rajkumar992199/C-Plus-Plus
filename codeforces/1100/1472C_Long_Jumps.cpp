#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long mx = 0;
        vector<long long> a(n), dp(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = a[i];
            int j = i + a[i];
            if (j < n) {
            dp[i] += dp[j];
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}