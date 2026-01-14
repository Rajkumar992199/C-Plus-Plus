#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, ans = 0, x = -1;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') 
            x = i + k;
        else {
            if(i > x) 
                ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}