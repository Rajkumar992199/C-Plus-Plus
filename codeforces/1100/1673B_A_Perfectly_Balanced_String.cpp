#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    set<char> se;
    for(int i = 0; i < n; i++) 
        se.insert(s[i]);
    // number of different characters
    int len = se.size();
    se.clear();

    for(int i = 0; i < n; i++) {
        if(i == len - 1) {
            se.insert(s[i]);
            // all characters should be come only once in beginning
            if(se.size() != len) {
                cout << "NO\n";
                return;
            }
        }
        else if(i > len - 1) {
            if(s[i - len] != s[i]) {
                cout << "NO\n";
                return;
            }
        }
        else {
            se.insert(s[i]);
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
