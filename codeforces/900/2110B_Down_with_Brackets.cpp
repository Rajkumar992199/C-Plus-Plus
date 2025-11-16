#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
        cin >> s;
        int n = s.size(), count = 0, ans = 0;
        for(int i = 1; i < n - 1; i++) { // just remove first and last brecket
            if(s[i] == '(')
                count++;
            else if(s[i] == ')') 
                count--;
            if(count < 0) { 
                cout << "YES\n";
                return;
            }
        }
        if(count) cout << "YES\n"; 
        else cout << "NO\n";
        return; 
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}