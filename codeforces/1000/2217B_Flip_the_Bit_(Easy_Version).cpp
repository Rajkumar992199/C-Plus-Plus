#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int p1;
    cin >> p1;
    int p = p1 - 1;
    
    int x = a[p];
    
    int v_l = 0;
    int prev = x;
    for (int i = 0; i <= p; i++) {
        if (a[i] != prev) {
            v_l++;
            prev = a[i];
        }
    }
    
    int v_r = 0;
    prev = x;
    for (int i = n - 1; i >= p; i--) {
        if (a[i] != prev) {
            v_r++;
            prev = a[i];
        }
    }
    
    cout << max(v_l, v_r) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) 
        solve();
    
    return 0;
}