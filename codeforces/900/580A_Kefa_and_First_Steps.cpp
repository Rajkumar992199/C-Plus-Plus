#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = 1, ans = 1;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i != 0 && a[i] >= a[i - 1]) {
            ans++;
            mx = max(mx, ans);
        }
        else ans = 1;
    }
    cout << mx << endl;
    return 0;
}