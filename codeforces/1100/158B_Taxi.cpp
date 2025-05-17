#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans = 0, c[4];
    for (int i = 0; i < 4; i++) c[i] = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i] - 1]++;
    }
    ans += c[3]; // adding all 4's
    c[3] = 0;
    int x = min(c[2], c[0]); // adding all combinations of 1's and 3's (1 + 3)
    ans += x;
    c[2] -= x;
    c[0] -= x;
    ans += (c[1] / 2); // adding all combinations of 2's
    c[1] = c[1] % 2;
    x = min(c[1], c[0] / 2);
    ans += x; // adding all combinations of 1 2's and 2 1's (2 + 1 + 1)
    c[1] -= x;
    c[0] -= 2 * x;
    x = min(c[1], c[0]);
    ans += x; // adding all (1 + 2)
    c[1] -= x;
    c[0] -= x;
    ans += (c[0] / 4) + (c[0] % 4 > 0) + c[1] + c[2]; // (1 + 1 + 1 + 1) & all remaing groups
    cout << ans;
    return 0;
}