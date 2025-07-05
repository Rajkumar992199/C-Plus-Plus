#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans = -1;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != i) {
                if (ans == -1) ans = a[i];
                else ans = ans & a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}