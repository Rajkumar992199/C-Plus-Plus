#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n, m;
    cin >> a >> b >> n >> m;
    if(a>b) 
        swap(a, b);
    
    if(a < m || a+b < n+m) 
        cout << "No\n";
    else
        cout << "Yes\n";
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