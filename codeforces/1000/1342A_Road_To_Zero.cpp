#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b, ans;
        cin >> x >> y >> a >> b;
        if (x > y) swap(x, y);
        if (2 * a >= b) ans = (x * b) + (y - x) * a;
        else ans = (x + y) * a;
        cout << ans << endl;
    }
    return 0;
}
