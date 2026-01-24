#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<bool> mini(n + 1, false); // in some c=1 segment
        vector<bool> mex(n + 1, false); // in some c=2 segment

        for(int i = 0; i < q; ++i) {
            int c, l, r;
            cin >> c >> l >> r;
            if (c == 1) 
                for (int x = l; x <= r; ++x) mini[x] = true;
            else  // c == 2
                for (int x = l; x <= r; ++x) mex[x] = true;
        }

        vector<int> a(n + 1, 0);
        for(int i = 1; i <= n; i++) 
            a[i] = i % k;   // in [0, k-1]

        for(int i = 1; i <= n; ++i) {
            if (mini[i] && mex[i]) a[i] = k + 1; // a[i] > k
            else if(mini[i]) a[i] = k;
        }

        for(int i = 1; i <= n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
