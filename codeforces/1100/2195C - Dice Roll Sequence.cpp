#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(a[i-1] == a[i] || a[i-1] + a[i] == 7) {
            ans++;
            i++;
        }
    }
    cout << ans << endl;
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
