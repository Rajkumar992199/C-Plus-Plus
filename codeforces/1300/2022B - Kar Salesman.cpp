#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    long long sum = 0, mx = 0, a;

    for(int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        mx = max(mx, a);
    }

    cout << max(mx, (sum + x - 1)/x) << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}