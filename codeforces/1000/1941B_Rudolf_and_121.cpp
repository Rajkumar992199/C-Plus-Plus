#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    for(int i = 1; i < n - 1; i++) {
        a[i] -= 2 * a[i - 1];
        a[i + 1] -= a[i - 1];
        if(a[i] < 0 || a[i + 1] < 0) {
            cout << "NO\n";
            return;
        }
    }
    if(!(a[n - 1] || a[n - 2])) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
        solve();
    return 0;
}
