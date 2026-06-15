#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    k = ((1 << k) + 1);

    vector<int> a(n), b(n);
    char c;
    long long a1 = 0, b1 = 0, c1 = 0; // count of 1 in a(1) , a(2^k + 1), a(1) XOR a(2^k + 1)

    for(int i = 0; i < n; i++) {
        cin >> c;
        a[i] = c - '0';
        a1 += a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> c;
        b[i] = c - '0';
        b1 += b[i];
        c1 += a[i] ^ b[i];
    }

    a1 *= (n - a1);
    b1 *= (n - b1);
    c1 *= (n - c1);

    long long ans = (k / 3) * (a1 + b1 + c1);
    if(k % 3 == 2)
            ans += b1 + a1;

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
        solve();

    return 0;
}