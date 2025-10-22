#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        bool ok = false;
        for (int i = 0; i < n; ++i) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b == c) ok = true;
        }
        if (ok && m % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
