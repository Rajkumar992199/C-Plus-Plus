#include <bits/stdc++.h>
using namespace std;

void solve() {
    bool f1 = 0;
    int n;
    string s;

    cin >> n >> s;
    for(int i = 3; i < n; i++) {
        if(s[i] == '6' && s[i - 1] == '2' && s[i - 2] == '0' && s[i - 3] == '2') {
            cout << 0 << endl;
            return;
        }
        if(s[i] == '5' && s[i - 1] == '2' && s[i - 2] == '0' && s[i - 3] == '2')
            f1 = 1;
    }
    cout << 0 + f1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}