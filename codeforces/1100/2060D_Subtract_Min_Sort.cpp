#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n], diff;
        bool flag = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (flag) continue;
            if (i > 0) {
                diff = min(a[i], a[i - 1]);
                a[i] -= diff;
                a[i - 1] -= diff;
                if (a[i - 1] != 0) flag = 1;
            }
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}