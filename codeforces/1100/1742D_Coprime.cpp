#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = -1;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        int gcd_all = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            gcd_all = __gcd(gcd_all, a[i]);
        }
        if (gcd_all != 1) 
            cout << -1 << endl;
        else {
            if (a[n - 1] == 1) cout << 2 * n << endl;
            else if (a[n - 2] == 1 || __gcd(a[n - 2], a[n - 1]) == 1)
                cout << 2 * n - 1 << endl;
            else {
                gcd_all = a[n - 1];
                int k = n;
                while (gcd_all != 1) {
                    k--;
                    gcd_all = __gcd(gcd_all, a[k]);
                }
                int temp = k;
                for (int i = n - 1; i >= k; i--) {
                    if (__gcd(a[i], a[k]) == 1) {
                        if (ans == -1) temp = i;
                        ans = max(ans, i + k + 2);
                    }
                }
                if (ans != -1) {
                    for (int i = k - 1; i >= 0; i--) {
                        for (int j = temp + 2; j < n; j++) {
                            if (__gcd(a[i], a[j]) == 1) {
                                ans = max(ans, i + j + 2);
                            }
                        }
                    }
                }
                else {
                    for (int i = n - 1; i >= 0; i--) {
                        for (int j = n - 1; j >= 0; j--) {
                            if (__gcd(a[i], a[j]) == 1) {
                                ans = max(ans, i + j + 2);
                            }
                        }
                    }
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}