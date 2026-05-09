#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, c, t;
    cin >> h >> c >> t;

    if(t >= h)
        cout << 1 << endl;
    else if (2 * t <= h + c)
        cout << 2 << endl;
    else {
        long long k = (h - t) / (2 * t - h - c);

        auto diff = [&](long long k) {
            long long num = (k + 1) * h + k * c;
            long long den = 2 * k + 1;

            return abs(num - t * den);
        };

        long long d1 = diff(k), d2 = diff(k + 1);
        long long cups1 = 2 * k + 1, cups2 = 2 * (k + 1) + 1;

        if (d1 * cups2 <= d2 * cups1)
            cout << cups1 << endl;
        else
            cout << cups2 << endl;
    }
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