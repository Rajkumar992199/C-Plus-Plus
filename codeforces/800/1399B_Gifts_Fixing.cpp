#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n], b[n], m1, m2, ans = 0, p, q;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        m1 = *min_element(a, a+n);
        m2 = *min_element(b, b+n);
        for (int i = 0; i < n; i++) {
            p = a[i] - m1;
            q = b[i] - m2;
            ans += max(p,q);
        }
        cout << ans << endl;
    }
}