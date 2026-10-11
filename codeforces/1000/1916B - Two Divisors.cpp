#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long lcm = a*b/__gcd(a,b);
    if(lcm == b) 
        cout << b*(b/a) << '\n';
    else
        cout << lcm << '\n';
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