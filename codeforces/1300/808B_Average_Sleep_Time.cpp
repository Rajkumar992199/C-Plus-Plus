#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, sum = 0;
    double ans = 0;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (i + 1 >= k) {
            if (i >= k) sum -= a[i - k];
            ans += sum;
        }
    }
    ans /= n - k + 1;
    cout << fixed << setprecision(10) << ans;
    return 0;
}