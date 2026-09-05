#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    int mn = 1, num = 3;

    while (num <= l) {
        num *= 3;
        mn++;
    }
    int ans = 2*mn;

    while(num <= r) {
        ans += mn * (num - l)+1;
        l = num;
        mn++;
        num *= 3;
    }
    
    if(num > r)
        num /= 3;
    if(num < r)
        ans += mn * (r - max(l, num));
        
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