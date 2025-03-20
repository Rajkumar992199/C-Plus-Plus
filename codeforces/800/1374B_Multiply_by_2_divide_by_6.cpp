#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int ans = 0;
        cin >> n;
        while (n % 3 == 0) {
            n = n / 3;
            ans++;
            if(n % 2 == 0) n = n / 2;
            else ans++;
        }
        if (n == 1) cout << ans << endl;
        else cout << -1 << endl;
    }
}