#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k, ans;
        cin >> x >> y >> k;
        ans = (((y + 1) * k) - 1) / (x - 1);
        ans += k;
        if ((((y + 1) * k) - 1) % (x - 1) > 0) ans++;
        cout << ans << endl;
    }
    return 0;
}