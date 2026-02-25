#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == b) {
        if(a == c) {
            if(a == d) 
                cout << "YES\n"; // if all sticks of same size
            else 
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    else 
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}