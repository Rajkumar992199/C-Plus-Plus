#include<bits/stdc++.h>
using namespace std;

long long f(long long n) {
    return n
        - n/2 - n/3 - n/5 - n/7
        + n/6 + n/10 + n/14 + n/15 + n/21 + n/35
        - n/30 - n/42 - n/70 - n/105
        + n/210;
}

void solve() {
    long long l, r;
    cin >> l >> r;
    

    cout << f(r) - f(l - 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}