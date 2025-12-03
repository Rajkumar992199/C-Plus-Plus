#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b; 
    for(int i = n - 1; i >= 0; i--) 
        cin >> a[i];

    for(int i = 1; i < n; i++) {
        if(a[0] != a[i]) 
            b.push_back(i);
    }

    if(b.size() == 0) {
        cout << 0 << endl;
        return;
    }

    int ans = 0, cnt = b[0], i = 0;
    while(i < b.size()) {
        if(cnt > b[i]) {
            i++;
            continue;
        }
        cnt = b[i] * 2;
        ans++;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
