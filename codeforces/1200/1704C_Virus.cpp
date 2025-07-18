#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, ans = 0, sub = 0, temp;
        cin >> n >> m;
        vector<int> a(m), b(m);
        for (int i = 0; i < m; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < m - 1; i++) b[i] = a[i + 1] - a[i] - 1;
        b[m - 1] = n - (a[m - 1] - a[0]) - 1;
        sort(b.rbegin(), b.rend());
        for (auto it : b) {
            if (it - sub * 2 > 0) 
                ans += max(1ll, it - sub * 2 - 1);
            sub += 2;
        }
        cout << n - ans << endl;
    }
    return 0;
}