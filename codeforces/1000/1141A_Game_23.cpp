#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, ans = 0;
    cin >> n >> m;
    if (m % n != 0) cout << -1;
    else {
        m /= n;
        while (m % 3 == 0) {
            m /= 3;
            ans++;
        }
        while(m % 2 == 0) {
            m /= 2;
            ans++;
        }
        if (m == 1) cout << ans;
        else cout << -1 << endl;
    }
    return 0;
}