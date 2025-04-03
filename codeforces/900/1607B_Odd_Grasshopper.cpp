#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n, ans;
        cin >> x >> n;
        if (n % 4 == 1) ans = -n;
        else if (n % 4 == 2) ans = 1;
        else if (n % 4 == 3) ans = n + 1;
        else if (n % 4 == 0) ans = 0;
        if(x % 2 == 0) ans = x + ans;
        else ans = x - ans;
        cout << ans << endl;
    }
}