#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, q;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        int l, r;
        long long a[n], b[n + 1], k, ans;
        b[0] = 0; //initializing b[0] as 0.

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i + 1] = b[i] + a[i]; // geeting sum after each elements.
        }

        for (int i = 0; i < q ; i++) {
            cin >> l >> r >> k;
            ans = b[n] - b[r] + b[l - 1] + ((r - l + 1) * k); // replacing r to l elements from sum with k's.
            //This will not affect original query as mentioned in problem.
            if (ans % 2 == 0) cout << "NO" << endl; // checking parity.
            else cout << "YES" << endl;
        }
    }
    return 0;
}