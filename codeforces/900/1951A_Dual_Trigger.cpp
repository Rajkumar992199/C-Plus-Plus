#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '1');
    if (cnt % 2 == 1 || (cnt == 2 && s.find("11") != -1)) 
        cout << "NO\n";
    else 
        cout << "YES\n";
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
