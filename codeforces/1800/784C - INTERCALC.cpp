#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    mx = mx ^ a[n - 1];
    cout << mx;
}