#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n;
    set <long long> s;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    long long cur = LLONG_MIN, ans = 1, temp = 1;
    for(auto x : s) {
        if(cur + 1 == x) {
            temp++;
            ans = max(ans, temp);
        }
        else
            temp = 1;
        cur = x;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
        solve();
    
    return 0;
}