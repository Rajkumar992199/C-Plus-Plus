#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 1, flag = 0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) continue;
            else if (!flag && (a[i] - a[i - 1] == 1)) flag++;
            else if (flag && (a[i] - a[i - 1] > 0)) flag--, ans++;
            else if (a[i] - a[i - 1] > 1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}