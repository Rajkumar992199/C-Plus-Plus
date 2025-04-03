#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        long long x;
        cin >> n >> x;
        long long a[n], sum1 = 0, sum2 = 0, c = 0, b = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % x == 0) c += a[i];
            else b += a[i];
        }
        sum1 = (c / x) + ((b + (x - 1)) / x);
        for (int i = 0; i < n; i++) sum2 += (a[i] + (x - 1)) / x;
        cout << sum1 << " " << sum2 << endl;
    }
}