#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, mx = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        mx = max(mx, x);
    }
    cout << mx * n << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
        solve();
    
    return 0;
}