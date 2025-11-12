#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, count = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(26, 0); // visited characters in string
    for(int i = 0; i < n; i++) {
        if(v[s[i] - 'a'] == 0) { // if character is unvisited then count++
            count++;
            v[s[i] - 'a'] = 1; // visited
        }
        ans += count; // addition of count of visited unique characters
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}