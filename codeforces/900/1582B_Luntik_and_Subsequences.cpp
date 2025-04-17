#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n], c1 = 0, c0 = 0, ans;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) c0++;
            else if (a[i] == 1) c1++;
        }
        ans = c1 * pow(2, c0);
        cout << ans << endl;
    }
    return 0;
}