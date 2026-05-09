#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long p, q;
    cin >> p >> q;

    if (p >= q) 
        cout << "Alice" << endl;
    else {
        long long s = 3 * p - 2 * q;

        if (s < 0) 
            cout << "Alice" << endl;
        else 
            cout << "Bob" << endl;
    }
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