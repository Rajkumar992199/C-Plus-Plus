#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, counter = 1, ans = 1;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) counter++;
            else counter = 1;
            ans = max(ans, counter);
        }
        cout << n - ans << endl;
    }
    return 0;
}