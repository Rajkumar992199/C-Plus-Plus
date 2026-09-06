#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    long long p, pre = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> p;
        
        if(i) {
            long long temp = max(0ll,((p*100+k-1) / k) - pre);
            ans += temp;
            pre += temp;        
        }
        pre += p;
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