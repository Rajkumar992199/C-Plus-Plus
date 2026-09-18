#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long lcm = 2, num = 2, x;
    bool ans = true;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % lcm == 0)
            ans = false;
        num++;
        lcm = lcm*num / __gcd(lcm, num);
    }
    
    if(ans)
        cout << "YES\n";
    else
        cout << "NO\n";
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