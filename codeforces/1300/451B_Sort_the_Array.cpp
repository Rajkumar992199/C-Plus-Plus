#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, temp;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    long long x = 0, y = 0;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            x = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[n - i - 1] != a[n - i - 1]) {
            y = n - i - 1;
            break;
        }
    }
    reverse(a.begin() + x, a.begin() + y + 1);
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            ans++;
            break;
        }
    }
    if (!ans) cout << "yes\n" << x + 1 << " " << y + 1;
    else cout << "no";
    return 0;
}
