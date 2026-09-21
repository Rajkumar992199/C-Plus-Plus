#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int P = -1, C = -1;
    bool ans = true;

    for(int i = 0; i < n; i++) {
        int p, c;
        cin >> p >> c;
        if(P > p || C > c || p - P < c - C)
            ans = false;
        P = p, C = c;
    }
    if(ans)
        cout << "YES\n";
    else
        cout << "NO\n";
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