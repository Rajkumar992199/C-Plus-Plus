#include <bits/stdc++.h>
using namespace std;

int coin() {
    int n;
    cin >> n;
    int a[n], sum[n + 1], sum_all = 0, ans = 0;
    sum[n] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_all += a[i];
    }
    sort(a, a + n);
    for (int i = n; i > 0; i--) {
        sum[i - 1] = sum[i] + a[i - 1];
        ans++;
        if (2 * sum[i - 1] > sum_all) return ans;
    }
}

int main() {
    int ans;
    ans = coin();
    cout << ans << endl;
    return 0;
}