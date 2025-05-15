#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , m, x , mx = INT_MIN, l , r;
        char c;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mx = max(mx , x);
        }
        for (int i = 0; i < m; i++) {
            cin >> c >> l >> r;
            if (l <= mx && r >= mx) {
                if (c == '+') mx++;
                else mx--;
            }
            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}
