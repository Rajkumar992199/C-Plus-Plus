#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n];
        cin >> a[0];
        long long ans = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            ans &= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}