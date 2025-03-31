#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n], ans = 0;
        for(int i = 0; i< n; i++) {
            cin >> a[i];
            ans += a[i];
        }
        ans -= (2 * (a[n - 2]));
        cout << ans << endl;
    }
}