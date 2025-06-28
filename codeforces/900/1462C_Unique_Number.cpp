#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, n = 9, ans = 0;
        cin >> x;
        if (x > 45) cout << -1 << endl;
        else {
            while(x > n) {
                ans++;
                x -= n;
                n--;
            } 
            cout << x;
            while(ans--) cout << 9 - ans;
            cout << endl;
        }
    }
    return 0;
}