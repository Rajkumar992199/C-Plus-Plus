#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], mn = 5, count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % k == 0) mn = 0;
            mn = min(mn, (k - (a[i] % k)));
            if (a[i] % 2 == 0) count++;
        }
        if (k == 4) {
            int mx = 2;
            mx -= count;
            mx = max(mx, 0);
            mn = min(mn , mx);
        }
        cout << mn << endl;
    }
    return 0;
}