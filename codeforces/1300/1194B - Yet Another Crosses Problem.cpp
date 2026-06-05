#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);

    for(int i = 0; i < n; i++) 
        cin >> s[i];

    vector<int> rows(n, 0), cols(m, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            rows[i] += (s[i][j] == '.');
            cols[j] += (s[i][j] == '.');
        }
    }
    int ans = n + m;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            ans = min(ans, rows[i] + cols[j] - (s[i][j] == '.'));
        
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
    while (q--) 
        solve();

    return 0;
}