#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    long long cur = 0, mn = 0, n = s.size(), ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '+')
            cur++;
        else {
            cur--;
            if(cur < mn) {
                ans += i+1;
                mn--;
            }
        }
    }
    ans += n;
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