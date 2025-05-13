#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 1 && a[i] % 2 != a[i - 2] % 2) flag = 1;
        }
        if (flag) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
