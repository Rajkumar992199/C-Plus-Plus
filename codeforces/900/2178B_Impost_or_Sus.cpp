#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.size(), ans = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1) {
            if(s[i] == 'u') {
                s[i] = 's';
                ans++;
            }
        }
        else {
            if(s[i] == 'u' && s[i + 1] == 'u') {
                s[i + 1] = 's';
                ans++;
            }
        }
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
}
