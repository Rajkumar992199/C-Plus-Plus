#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], flag = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) if (__gcd(a[i], a[j]) <= 2) {
                flag = 1;
                break;
            }
            if (flag == 1) break;
        }
        if (flag == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}