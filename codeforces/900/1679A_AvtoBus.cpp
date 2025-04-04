#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        if ( n < 4 || n % 2 == 1) cout << -1 << endl;
        else {
            if (n == 4) cout << 1 << " " << 1 << endl;
            else {
                ans = n / 6;
                if (n % 6 == 4 || n % 6 == 2) ans++;
                cout << ans << " " << n / 4 << endl;
            }
        }
    }
}