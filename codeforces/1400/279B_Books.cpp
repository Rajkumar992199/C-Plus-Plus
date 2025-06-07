#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t, j = 0, ans = 0, mx = 0;
    cin >> n >> t;
    vector<int> a(n), sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans++;
        sum[i + 1] = sum[i] + a[i];
        while(sum[i + 1] > t) {
            sum[i + 1] -= a[j];
            j++;
            ans--;
        }
        mx = max(mx, ans);
    }
    cout << mx;
    return 0;
}
