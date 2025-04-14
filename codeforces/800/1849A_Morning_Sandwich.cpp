#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, b, c, h, ans;
    cin >> t;
    while (t--) {
        cin >> b >> c >> h;
        ans = 2 * min(b - 1, c + h) + 1;
        cout << ans << endl;
    }
    return 0;
}