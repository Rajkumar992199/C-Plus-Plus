#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n - 1), c(n - 2);
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) cin >> b[i];
    for (int i = 0; i < n - 2; i++) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && !x) x = a[i];
        if (c[i] != b[i] && !y) y = b[i]; 
    }
    cout << x << endl << y;
    return 0;
}
