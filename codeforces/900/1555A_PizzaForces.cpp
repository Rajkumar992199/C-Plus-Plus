#include<bits/stdc++.h>
using namespace std;

signed main() {
    long long t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 != 0) n++;
        if (n < 6) n = 6;
        cout << (n * 5) / 2 << endl;
    }
    return 0;
}
