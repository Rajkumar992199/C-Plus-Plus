#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    long long s = x + y;

    for (int bit = 30; bit >= 0; bit--) {
        long long power = 1LL << bit;
        if ((s & power) != 0 && (x >= power)) 
            x = x - power;
    }

    cout << s << " " << x << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) 
        solve();

    return 0;
}