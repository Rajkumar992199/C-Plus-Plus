#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    x = abs(x);
    y = abs(y);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '8') {
            if(x) x--;
            if(y) y--;
        }
        if(s[i] == '4') {
            if(x && y) x > y? x--:y--;
            else if(x) x--;
            else if(y) y--;
        }
        if(!x && !y) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
