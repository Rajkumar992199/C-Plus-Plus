#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long x = 1LL * a * d;
        long long y = 1LL * b * c;
        if (x == y) cout << 0 << "\n";
        else if ((y && x % y == 0) || (x && y % x == 0)) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}
