#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n], ans;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ans = a[0];
        for (int i = 0; i < n; i++) ans = (ans + a[i]) / 2;
        cout << ans << endl;
    }
}