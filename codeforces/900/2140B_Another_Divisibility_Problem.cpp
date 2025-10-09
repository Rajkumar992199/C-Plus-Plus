#include <bits/stdc++.h>
using namespace std; 
 
void solve() 
{
    long long a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i < (1 << 7); i++) {
        int x = 0, y = 0, z = 0;
        for (int j = 1; j <= 7; ++j) {
            if (i >> (j - 1) & 1) {
                x += j & 1;
                y += j >> 1 & 1;
                z += j >> 2;
            }
        }
        if (x <= a && y <= b && z <= c)
            ans = max(ans, __builtin_popcount(i));
    }
    cout << ans << "\n";
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
