#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], mx, mn;
        for (int i = 0; i < n; i++) cin >> a[i];
        mx = *max_element(a, a + n);
        mn = *min_element(a, a + n);
        int ans = max(mx - a[0], a[n - 1] - mn);
        for (int i = 0; i < n - 1; i++) ans = max(ans , a[i] - a[i + 1]);
        cout << ans << endl;
    }
}