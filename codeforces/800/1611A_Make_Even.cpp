#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    if((s[n - 1] - '0') % 2 == 0) 
        cout << 0 << endl;
    else if((s[0] - '0') % 2 == 0)
        cout << 1 << endl;
    else {
        for(int i = 1; i < s.size() - 1; i++) {
            if((s[i] - '0') % 2 == 0) {
                cout << 2 << endl;
                return;
            }
        }
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}