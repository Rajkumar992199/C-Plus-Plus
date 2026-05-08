#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, x, y;
    cin >> a >> b >> x >> y;

    long long g = __gcd(x, y);
    x = x / g;
    y = y / g;

    long long ans = min(a / x, b / y);
    cout << ans << endl;
    
    return 0;
}