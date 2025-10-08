#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;
            if (dx == dy) {
                if ((x - y) % s == 0)
                    ans++;
            } 
            else if ((x + y) % s == 0) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
