#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, mx = 0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < n - 1; ++i) 
        mx = max(mx, a[i] - a[i + 1]);

    bool sorted = true;
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) 
            a[i] += mx;

        if(a[i] < a[i - 1])
            sorted = false;
    }

    if(sorted) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
    while (q--) 
        solve();

    return 0;
}