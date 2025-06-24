#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, ans = 0;
        cin >> n;
        long long alice = 0, bob = 0, k = 0, m = n - 1;
        vector<int> w(n);
        for (int i = 0; i < n; i++) 
            cin >> w[i];
        for (int i = 0; i < n; i++) {
            if (n == 1) break;
            if (alice == bob) {
                ans = i;
                alice += w[k];
                k++;
            }
            else if (alice < bob) {
                alice += w[k];
                k++;
            }
            else {
                bob += w[m];
                m--;
            }
        }
        if (alice == bob && n != 1) ans = n;
        cout << ans << endl;
    }
    return 0;
}