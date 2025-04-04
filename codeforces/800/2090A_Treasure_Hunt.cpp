#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, ans = 0;
        cin >> x >> y >> a;
        ans = a % (x + y);
        if (ans < x) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}