#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, mn, mx, ans;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];
        mn = x[0];
        mx = x[n - 1];
        if (mn == mx || mn >= s) {
            ans = abs(mx - s);
        }
        else if (mx <= s) 
            ans = abs(s - mn);
        else {
            ans = abs(min(s - mn, mx - s));
            ans += abs(mx - mn);
        }
        cout << ans << endl;
    }
    return 0;
}