#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    bool has5 = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 5 == 0)
            has5 = true;
    }

    if(has5) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 5 != 0) {
                cout << "NO\n";
                return;
            }

            if (a[i] % 10 == 5)
                a[i] += 5;
        }
    } 
    else {
        for (int i = 0; i < n; i++) {
            while (a[i] % 10 != 2)
                a[i] += a[i] % 10;

            a[i] %= 20;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << "NO\n";
            return;
        }
    }

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