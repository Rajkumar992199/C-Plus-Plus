#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b ,s;
        cin >> n >> k >> b >> s;
        long long mn = (k * b);
        long long mx = (k * b) + (k - 1) * n;
        if (s < mn || s > mx) cout << "-1" << endl;
        else {
            vector<long long> ans(n , 0);
            ans[0] = mn;
            s -= mn;
            for (int i = 0; i < n; i++) {
                long long add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (int i = 0; i < n; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
