#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<bool> present(n + 1, false);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int num : a) 
        if (num >= 0 && num <= n) 
            present[num] = true;
    
    for (int i = 0; i <= n; i++) 
        if (!present[i]) {
            cout << min(i, k-1) << '\n';
            return;
        }
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
