#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[k - 1] == a[k] || (a[0] == 1 && k == 0) || n < k) cout << "-1";
    else if (k > 0) cout << a[k - 1];
    else cout << 1;
    return 0;
}
