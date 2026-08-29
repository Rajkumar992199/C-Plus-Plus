#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++) 
        if(s[i] == '*')
            cnt++;

    int mid = cnt/2 + cnt%2, x = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '*')
            x++;
        else if(x < mid)
            ans += x;
        else 
            ans += (cnt - x);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}