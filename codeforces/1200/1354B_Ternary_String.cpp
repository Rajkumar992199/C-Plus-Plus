#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int a = -1, b = -1, c = -1, ans = INT_MAX;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1')
            a = i;
        else if(s[i] == '2')
            b = i;
        else 
            c = i;
        if(a != -1 && b != -1 && c != -1) 
            ans = min(ans, max(a, max(b, c)) - min(a, min(b, c)) + 1);
    }
    if(ans == INT_MAX) 
        cout << 0 << endl;
    else 
        cout << ans << endl;
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