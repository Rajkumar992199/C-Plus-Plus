#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int ans = (abs(a - b)) / (2 * c);
        if ((abs(a - b)) % (2 * c) != 0) ans++;
        cout << ans << endl;
    }
}