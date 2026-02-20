#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == '0') {
            if(s[i + 1] == '0') {
                if(i == n - 2)
                    s[i + 1] = '1';
                else if(i == 0) {
                    if(s[i + 2] != '1') s[i + 1] = '1';
                    else s[i] = '1';
                }
                else if(s[i + 2] == '0') {
                    if(s[i + 3] == '1') s[i + 1] = '1';
                    else s[i + 2] = '1';
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
        if(s[i] == '1') 
            ans++;
        
    cout << max(1, ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}