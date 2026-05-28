#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long a = (x + k - 1) / k; 
    long long b = (y + k - 1) / k;

    if(a > b)
        cout << 2 * a - 1 << endl;
    else
        cout << 2 * b << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}