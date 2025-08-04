#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q, j = 0;
        cin >> n >> q;
        vector<long long> a(n + 1, 0), b(q), sum(n + 1, 0), mx(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] += sum[i - 1] +a[i];
            mx[i] = max(mx[i - 1], a[i]);
        }
        for (int i = 0; i < q; i++) {
            cin >> b[i];
            j = upper_bound(mx.begin(), mx.end(), b[i]) - mx.begin() - 1;
            cout << sum[j] << " ";
        }
        cout << endl;
    }
    return 0;
}