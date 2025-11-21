#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long n, or1 = 0, or2 = 0;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        or1 = or1 | a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        or2 = or2 | b[i];
    }

    cout << or1 + or2;
    return 0;
}