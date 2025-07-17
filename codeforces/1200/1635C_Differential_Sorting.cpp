#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (is_sorted(a.begin(), a.end())) cout << 0 << endl;
        else if (a[n - 1] < a[n - 2] || a[n - 1] < 0) cout << -1 << endl;
        else {
            cout << n - 2 << endl;
            for (int i = n - 2; i > 0; i--) 
                cout << i << " " << i + 1 << " " << n << endl;
        }
    }
    return 0;
}