#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, l;
    cin >> n >> l; //storing number of lanterns and street length
    double a[n];
    for (int i = 0; i < n; i++) cin >> a[i]; // storing lantern locations
    sort(a, a + n);
    double mx = max(a[0] - 0, l - a[n - 1]), diff; // maximum light radius required for end lanterns
    for (int i = 1; i < n; i++) {
        diff = (a[i] - a[i - 1]) / 2 ;
        mx = max(mx, diff);
    }
    cout << fixed << setprecision(10) << mx; // precision set to 10 decimal points
    return 0;
}