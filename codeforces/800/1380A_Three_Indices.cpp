#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, j, k;
    cin >> t;
    while (t--) {
        cin >> n;
        int p[n], flag1 = 0, flag2 = 0;
        for (int x = 0; x < n; x++) cin >> p[x];
        for (int x = 1; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) if ( p[x] > p[y]) {
                flag1++;
                k = y + 1;
                j = x + 1;
                break;
            }
            for (int y = x - 1; y >= 0; y--) {
                if(flag1 > 0 && p[x] > p[y]) {
                    flag2++;
                    i = y + 1;
                    break;
                }
            }
            if (flag2 == 0) flag1 = 0;
            else break;
        }
        if (flag2 > 0) cout << "YES" << endl << i << " " << j << " " << k << endl;
        else cout << "NO" << endl;
    }
}