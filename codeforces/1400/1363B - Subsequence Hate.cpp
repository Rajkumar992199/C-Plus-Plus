#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    for(auto c : s) {
        if(c == '0')
            cnt0++;
        else
            cnt1++;
    }

    int ans = min(cnt0, cnt1);
    int c0 = 0, c1 = 0;
    for(auto c : s) {
        if(c == '0') {
            c0++;
            cnt0--;
        }
        else {
            c1++;
            cnt1--;
        }
        ans = min({ans, cnt1+c0, cnt0+c1});
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}