#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.size(), cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'Y') {
            cnt++;
            if(cnt > 1) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
        solve();
}
