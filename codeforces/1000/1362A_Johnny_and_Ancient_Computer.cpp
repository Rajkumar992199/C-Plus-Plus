#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        int c1 = 0, c2 = 0;
        cin >> a >> b;
        if (a > b) swap(a, b);
        while (a % 2 == 0) {
            a /= 2;
            c1++;
        }
        while (b % 2 == 0) {
            b /= 2;
            c2++;
        }
        int ans = c2 - c1;
        if (ans == 2) ans = 1;
        if (ans > 2) {
            ans /= 3;
            if ((c2 - c1) % 3 != 0) ans++;
        }
        if (b == a) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}