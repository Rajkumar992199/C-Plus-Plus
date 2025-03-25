#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], b[n - 1], ans;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) b[i - 1] = max(a[i], a[i - 1]);
        }
        ans = *min_element(b, b + n - 1);
        cout << ans - 1 << endl;
    }
}