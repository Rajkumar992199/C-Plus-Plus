#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1, 0), v(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= 0) v[i] = 1;
        }
        v[n] = 1 - v[n - 1];
        long long mx = abs(a[0]), ans = 0;
        for (int i = 1; i <= n; i++) {
            if (v[i] == v[i - 1]) {
                if (mx == 0) mx++;
                if (v[i] == 0) mx = min(mx, abs(a[i]));
                else mx = max(mx, a[i]);
            } 
            else {
                if (v[i - 1] == 0) ans -= mx;
                else ans += mx;
                mx = abs(a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}