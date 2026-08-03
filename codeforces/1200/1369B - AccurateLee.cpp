#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s, ans;
    cin >> n >> s;
    bool zero = false;
    int x = 0, y = n - 1;
    while(s[x] == '0') {
        ans += '0';
        x++;
    }
    for(int i = x; i < n; i++) {
        if(s[i] == '0') {
            zero = true;
            break;
        }
    }
    if(zero)
        ans += '0';
    while(s[y] == '1') {
        ans += '1';
        y--;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}