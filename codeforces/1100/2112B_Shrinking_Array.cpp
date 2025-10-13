#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = -1;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 2 && abs(a[0] - a[1]) > 1) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i < n; i++) {
            if (abs(a[i] - a[i - 1]) <= 1) {
                ans = 0;
                break;
            }
            else if (i != n - 1 && ((a[i] > a[i + 1] && a[i] > a[i - 1]) 
                || (a[i] < a[i + 1] && a[i] < a[i - 1]))) {
                ans = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}