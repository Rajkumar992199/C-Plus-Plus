#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1) {
        long long x;
        cin >> x;
        cout << (x <= a[0] ? "YES\n" : "NO\n");
        return;
    }

    long long mx = -1;          // fixed non-zero difference
    long long maxZeroDiff = 0;  // maximum diff when x == 0
    bool valid = true;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (x > a[i]) 
            valid = false;

        long long diff = a[i] - x;

        if (x == 0) 
            maxZeroDiff = max(maxZeroDiff, diff);
        else {
            if (mx == -1)
                mx = diff;
            else if (diff != mx)
                valid = false;
        }
    }

    if (valid && (mx == -1 || maxZeroDiff <= mx))
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