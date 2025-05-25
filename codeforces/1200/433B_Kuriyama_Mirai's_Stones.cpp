#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<long long> v(n), sum(n + 1, 0), sorted(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum[i + 1] += v[i] + sum[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) sorted[i + 1] += v[i] + sorted[i];
    cin >> m;
    int l, r, type;
    for (int i = 0; i < m; i++) {
        cin >> type >> l >> r;
        if (type == 1) cout << sum[r] - sum[l - 1] << endl;
        else cout << sorted[r] - sorted[l - 1] << endl;
    }
    return 0;
}
