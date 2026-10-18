#include <bits/stdc++.h>
using namespace std;

void solve() { 
    int n, x, uniq = 0, mx = 0;
    cin >> n;

    vector<int> cnt(n+1, 0);
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(!cnt[x])
            uniq++;

        cnt[x]++;
        mx = max(mx, cnt[x]);
    }
    
    for(auto it: cnt) 
        if(it == mx)
            n--;
    
    n++;
    cout << min((n-mx)/(mx-1), uniq-1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    
    while(t--)
        solve();

    return 0;
}